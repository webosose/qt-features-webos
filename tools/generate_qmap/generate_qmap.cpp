// Copyright (c) 2017-2024 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#include <QFile>
#include <QDataStream>
#include <QDebug>

#if QT_VERSION < QT_VERSION_CHECK(5, 8, 0)
#include <QtPlatformSupport/private/qevdevkeyboardhandler_p.h>
#else
#include <QtInputSupport/private/qevdevkeyboardhandler_p.h>
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6, 9, 0)
namespace QEvdevKeyboardMap = QKeyboardMap;
#endif

//HACK : to use evdev default keymap which is private static variable
//Change to the class name for local usage QEvdevKeyboardHandler -> WebOSKeymapHandler
//Or we can just copy the default keymap here
class WebOSKeymapHandler
{
public:
    static const QEvdevKeyboardMap::Mapping s_keymap_default[];
    static const QEvdevKeyboardMap::Composing s_keycompose_default[];
};
#define QEvdevKeyboardHandler WebOSKeymapHandler
#if QT_VERSION < QT_VERSION_CHECK(5, 8, 0)
#include <QtPlatformSupport/private/qevdevkeyboard_defaultmap_p.h>
#else
#include <QtInputSupport/private/qevdevkeyboard_defaultmap_p.h>
#endif

#include "webos_keymap_p.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        qFatal("Wrong number of argument %d", argc);

    char *filename = argv[1];
    QFile f(filename);

    if (!f.open(QIODevice::WriteOnly)) {
        qFatal("Could not open keymap file '%s'", qPrintable(filename));
    }
    // .qmap files have a very simple structure:
    // quint32 magic           (QKeyboard::FileMagic)
    // quint32 version         (1)
    // quint32 keymap_size     (# of struct QKeyboard::Mappings)
    // quint32 keycompose_size (# of struct QKeyboard::Composings)
    // all QKeyboard::Mappings via QDataStream::operator(<<|>>)
    // all QKeyboard::Composings via QDataStream::operator(<<|>>)

    quint32 qmap_version = 1;
    quint32 default_keymap_size = sizeof(WebOSKeymapHandler::s_keymap_default)/sizeof(QEvdevKeyboardMap::Mapping);
    quint32 default_keycompose_size = sizeof(WebOSKeymapHandler::s_keycompose_default)/sizeof(QEvdevKeyboardMap::Composing);
    quint32 webos_keymap_size = sizeof(webos_keymap)/sizeof(QEvdevKeyboardMap::Mapping);
    quint32 qmap_keymap_size = default_keymap_size + webos_keymap_size;

    QDataStream ds(&f);
    if (ds.status() != QDataStream::Ok || qmap_keymap_size == 0) {
        qFatal("'%s' is not a valid .qmap keymap file", qPrintable(filename));
    }

    ds << QEvdevKeyboardMap::FileMagic << qmap_version << qmap_keymap_size << default_keycompose_size;

    for (quint32 i = 0; i < default_keymap_size; ++i)
        ds << WebOSKeymapHandler::s_keymap_default[i];
    for (quint32 i = 0; i < webos_keymap_size; ++i)
        ds << webos_keymap[i];
    for (quint32 i = 0; i < default_keycompose_size; ++i)
        ds << WebOSKeymapHandler::s_keycompose_default[i];

    if (ds.status() != QDataStream::Ok) {
        qFatal("Keymap file '%s' can not be written.", qPrintable(filename));
    }

    return 0;
}
