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

#ifndef WEBOS_KEYMAP_P_H
#define WEBOS_KEYMAP_P_H

#if QT_VERSION >= QT_VERSION_CHECK(6, 9, 0)
namespace QEvdevKeyboardMap = QKeyboardMap;
#endif

// Keymap for WebOS specific
// { keycode, unicode, qtcode, modifiers, flags, special }
const QEvdevKeyboardMap::Mapping webos_keymap[] = {
    { 122, 0xffff, Qt::Key_Hangul,  0x00, 0x00, 0x0000 }, // Hangul
    { 125, 0xffff, Qt::Key_Super_L, 0x00, 0x00, 0x0000 }  // LEFT_META (Windows key)
};

#endif // WEBOS_KEYMAP_P_H
