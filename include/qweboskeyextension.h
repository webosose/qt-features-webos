// Copyright (c) 2013-2018 LG Electronics, Inc.
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

#ifndef QWEBOSKEYEXTENSION_H
#define QWEBOSKEYEXTENSION_H

#include <QtCore/qglobal.h>

/*
 * ! NOTE THE LINE BREAKS !
 * ! ALWAYS USE BLOCK COMMENTS !
 * ! IF ADDING NEW CODES, REMEMBER TO ADD THE LNE FEED !
 */

QT_BEGIN_HEADER

#define WEBOS_KEY_ENUM_DECLARATION enum KeyWebOS { \
        Key_webOS_PowerOnOff  = 0x01200000, \
        Key_webOS_Exit        = 0x01200001, \
        Key_webOS_Info        = 0x01200002, \
        Key_webOS_Back        = 0x01200003, \
        Key_webOS_Settings    = 0x01200004, \
        Key_webOS_Recent      = 0x01200005, \
        Key_webOS_Red         = 0x01200011, \
        Key_webOS_Green       = 0x01200012, \
        Key_webOS_Yellow      = 0x01200013, \
        Key_webOS_Blue        = 0x01200014, \
        Key_webOS_Twin        = 0x01200015, \
        Key_webOS_MagnifierZoom  = 0x01200016, \
        Key_webOS_LiveZoom       = 0x01200017, \
        Key_webOS_STBMenu        = 0x01200018, \
        Key_webOS_STBPower       = 0x01200019, \
        Key_webOS_ScreenDown     = 0x0120001a, \
        Key_webOS_TonePlusVoice  = 0x0120001f, \
        Key_webOS_ChannelUp   = 0x01200021, \
        Key_webOS_ChannelDown = 0x01200022, \
        Key_webOS_ChannelDash = 0x01200023, \
        Key_webOS_ChannelBack = 0x01200024, \
        Key_webOS_Favorite    = 0x01200025, \
        Key_webOS_SetChannel  = 0x01200026, \
        Key_webOS_TimerPowerOn = 0x01200027, \
        Key_webOS_Netflix           = 0x01200028, \
        Key_webOS_Amazon            = 0x01200029, \
        Key_webOS_IVI               = 0x0120002a, \
        Key_webOS_Accessibility     = 0x0120002b, \
        Key_webOS_UpDown           = 0x0120002c, \
        Key_webOS_USP                  = 0x0120002d, \
        Key_webOS_VoiceBack         = 0x0120002e, \
        Key_webOS_VoiceExit         = 0x0120002f, \
        Key_webOS_ALEXA             = 0x01200030, \
        Key_webOS_3DMode            = 0x01200031, \
        Key_webOS_ScreenRemote      = 0x01200032, \
        Key_webOS_QMenu             = 0x01200033, \
        Key_webOS_Voice             = 0x01200034, \
        Key_webOS_InputSource       = 0x01200035, \
        Key_webOS_InputTV           = 0x01200036, \
        Key_webOS_AspectRatio       = 0x01200037, \
        Key_webOS_LiveTVMenu        = 0x01200038, \
        Key_webOS_TVGuide           = 0x01200039, \
        Key_webOS_AudioDescription  = 0x01200040, \
        Key_webOS_MHP               = 0x01200041, \
        Key_webOS_Teletext          = 0x01200042, \
        Key_webOS_TextOption        = 0x01200043, \
        Key_webOS_TextMode          = 0x01200044, \
        Key_webOS_TextMix           = 0x01200045, \
        Key_webOS_TeletextSubPage   = 0x01200046, \
        Key_webOS_TeletextReveal    = 0x01200047, \
        Key_webOS_TeletextFreeze    = 0x01200048, \
        Key_webOS_TeletextPosition  = 0x01200049, \
        Key_webOS_TeletextSize      = 0x01200050, \
        Key_webOS_TeletextInTime    = 0x01200051, \
        Key_webOS_TeletextHold      = 0x01200052, \
        Key_webOS_Simplink          = 0x01200053, \
        Key_webOS_MultiPip          = 0x01200054, \
        Key_webOS_InputTVRadio      = 0x01200055, \
        Key_webOS_ProgramList       = 0x01200056, \
        Key_webOS_RecordList        = 0x01200057, \
        Key_webOS_StoreMode         = 0x01200058, \
        Key_webOS_MagicLink         = 0x01200059, \
        /* Local keys (front panel buttons) */ \
        Key_webOS_LocalUp           = 0x01200061, \
        Key_webOS_LocalDown         = 0x01200062, \
        Key_webOS_LocalLeft         = 0x01200063, \
        Key_webOS_LocalRight        = 0x01200064, \
        Key_webOS_LocalEnter        = 0x01200065, \
        Key_webOS_LocalLongPress    = 0x01200066, \
        Key_webOS_LocalPower        = 0x01200067, \
        Key_webOS_LocalVolumeUp     = 0x01200068, \
        Key_webOS_LocalVolumeDown   = 0x01200069, \
        /* Local keys - one key type */ \
        Key_webOS_LocalOneKeyShort  = 0x01200070, \
        Key_webOS_LocalOneKeyLong   = 0x01200071, \
        /* Local key - 9 key type */ \
        Key_webOS_LocalMusicPlayer  = 0x01200072, \
        Key_webOS_LocalInputSource  = 0x01200073, \
        Key_webOS_LocalSettings     = 0x01200074, \
        /* Another local key enter */ \
        Key_webOS_LocalAuto         = 0x01200080, \
        /* Japan Only */ \
        Key_webOS_BS                = 0x01200091, \
        Key_webOS_CS1               = 0x01200092, \
        Key_webOS_CS2               = 0x01200093, \
        Key_webOS_TER               = 0x01200094, \
        Key_webOS_3DigitInput       = 0x01200095, \
        Key_webOS_BMLData           = 0x01200096, \
        Key_webOS_JapanDisplay      = 0x01200097, \
        Key_webOS_4K_BS             = 0x01200098, \
        Key_webOS_4K_CS             = 0x01200099, \
        Key_webOS_BS_1              = 0x01200111, \
        Key_webOS_BS_2              = 0x01200112, \
        Key_webOS_BS_3              = 0x01200113, \
        Key_webOS_BS_4              = 0x01200114, \
        Key_webOS_BS_5              = 0x01200115, \
        Key_webOS_BS_6              = 0x01200116, \
        Key_webOS_BS_7              = 0x01200117, \
        Key_webOS_BS_8              = 0x01200118, \
        Key_webOS_BS_9              = 0x01200119, \
        Key_webOS_BS_10             = 0x0120011a, \
        Key_webOS_BS_11             = 0x0120011b, \
        Key_webOS_BS_12             = 0x0120011c, \
        Key_webOS_CS1_1             = 0x01200121, \
        Key_webOS_CS1_2             = 0x01200122, \
        Key_webOS_CS1_3             = 0x01200123, \
        Key_webOS_CS1_4             = 0x01200124, \
        Key_webOS_CS1_5             = 0x01200125, \
        Key_webOS_CS1_6             = 0x01200126, \
        Key_webOS_CS1_7             = 0x01200127, \
        Key_webOS_CS1_8             = 0x01200128, \
        Key_webOS_CS1_9             = 0x01200129, \
        Key_webOS_CS1_10            = 0x0120012a, \
        Key_webOS_CS1_11            = 0x0120012b, \
        Key_webOS_CS1_12            = 0x0120012c, \
        Key_webOS_CS2_1             = 0x01200131, \
        Key_webOS_CS2_2             = 0x01200132, \
        Key_webOS_CS2_3             = 0x01200133, \
        Key_webOS_CS2_4             = 0x01200134, \
        Key_webOS_CS2_5             = 0x01200135, \
        Key_webOS_CS2_6             = 0x01200136, \
        Key_webOS_CS2_7             = 0x01200137, \
        Key_webOS_CS2_8             = 0x01200138, \
        Key_webOS_CS2_9             = 0x01200139, \
        Key_webOS_CS2_10            = 0x0120013a, \
        Key_webOS_CS2_11            = 0x0120013b, \
        Key_webOS_CS2_12            = 0x0120013c, \
        Key_webOS_TER_1             = 0x01200141, \
        Key_webOS_TER_2             = 0x01200142, \
        Key_webOS_TER_3             = 0x01200143, \
        Key_webOS_TER_4             = 0x01200144, \
        Key_webOS_TER_5             = 0x01200145, \
        Key_webOS_TER_6             = 0x01200146, \
        Key_webOS_TER_7             = 0x01200147, \
        Key_webOS_TER_8             = 0x01200148, \
        Key_webOS_TER_9             = 0x01200149, \
        Key_webOS_TER_10            = 0x0120014a, \
        Key_webOS_TER_11            = 0x0120014b, \
        Key_webOS_TER_12            = 0x0120014c, \
        Key_webOS_4K_BS_1           = 0x01200151, \
        Key_webOS_4K_BS_2           = 0x01200152, \
        Key_webOS_4K_BS_3           = 0x01200153, \
        Key_webOS_4K_BS_4           = 0x01200154, \
        Key_webOS_4K_BS_5           = 0x01200155, \
        Key_webOS_4K_BS_6           = 0x01200156, \
        Key_webOS_4K_BS_7           = 0x01200157, \
        Key_webOS_4K_BS_8           = 0x01200158, \
        Key_webOS_4K_BS_9           = 0x01200159, \
        Key_webOS_4K_BS_10          = 0x0120015a, \
        Key_webOS_4K_BS_11          = 0x0120015b, \
        Key_webOS_4K_BS_12          = 0x0120015c, \
        Key_webOS_4K_CS_1           = 0x01200161, \
        Key_webOS_4K_CS_2           = 0x01200162, \
        Key_webOS_4K_CS_3           = 0x01200163, \
        Key_webOS_4K_CS_4           = 0x01200164, \
        Key_webOS_4K_CS_5           = 0x01200165, \
        Key_webOS_4K_CS_6           = 0x01200166, \
        Key_webOS_4K_CS_7           = 0x01200167, \
        Key_webOS_4K_CS_8           = 0x01200168, \
        Key_webOS_4K_CS_9           = 0x01200169, \
        Key_webOS_4K_CS_10          = 0x0120016a, \
        Key_webOS_4K_CS_11          = 0x0120016b, \
        Key_webOS_4K_CS_12          = 0x0120016c, \
        /* It is not a physical button, but acts like a key */ \
        Key_webOS_CursorShow        = 0x01200201, \
        Key_webOS_CursorHide        = 0x01200202, \
        Key_webOS_CameraVoice       = 0x01200203, \
        Key_webOS_FingerReadyCue    = 0x01200204, \
        Key_webOS_FingerFocusOn     = 0x01200205, \
        /* For commercial model */ \
        Key_webOS_TvLink            = 0x01200301, \
        Key_webOS_HotelMode         = 0x01200302, \
        Key_webOS_HotelModeReady    = 0x01200303, \
        /* For signage */ \
        Key_webOS_BrightnessDown    = 0x01200401, \
        Key_webOS_BrightnessUp      = 0x01200402, \
        Key_webOS_Tile              = 0x01200403, \
        Key_webOS_WhiteBalance      = 0x01200404, \
        Key_webOS_AutoConfigure     = 0x01200405, \
        Key_webOS_S_Menu            = 0x01200406, \
        Key_webOS_1_a_A             = 0x01200407, \
        Key_webOS_Mirror            = 0x01200408, \
        Key_webOS_SwapBothSide      = 0x01200409, \
        /* For signage Local Key */ \
        Key_webOS_LocalUpLong       = 0x01200461, \
        Key_webOS_LocalSettingsLong = 0x01200474, \
        Key_webOS_LocalDownLong     = 0x01200462, \
        Key_webOS_LocalAutoLong     = 0x01200479, \
        /* For hotel */ \
        Key_webOS_Alarm             = 0x01200315, \
        Key_webOS_Portal            = 0x01200304, \
        Key_webOS_CommercialGuide   = 0x01200305, \
        Key_webOS_CommercialInfo    = 0x01200306, \
        Key_webOS_FunctionMenu      = 0x01200307, \
        Key_webOS_IntuitiveMenu     = 0x01200318, \
        Key_webOS_AvMode            = 0x012003FF, \
        /* Factory keys, It is used to check the specific functionality in the factory, \
           or adjust the system internal settings by the developers. */ \
        Key_webOS_FactoryPowerOnly          = 0x01201001,   /* P-ONLY */  \
        Key_webOS_FactoryInStart            = 0x01201002,   /* IN START */ \
        Key_webOS_FactoryInStop             = 0x01201003,   /* IN STOP */ \
        Key_webOS_FactoryAdjust             = 0x01201004,   /* ADJ */ \
        Key_webOS_FactoryTv                 = 0x01201010,   /* TV */ \
        Key_webOS_FactoryVideo1             = 0x01201011,   /* AV1 */ \
        Key_webOS_FactoryVideo2             = 0x01201012,   /* AV2 */ \
        Key_webOS_FactoryComponent1         = 0x01201013,   /* COMP1 */ \
        Key_webOS_FactoryComponent2         = 0x01201014,   /* COMP2 */ \
        Key_webOS_FactoryHdmi1              = 0x01201015,   /* HDMI1 */ \
        Key_webOS_FactoryHdmi2              = 0x01201016,   /* HDMI2 */ \
        Key_webOS_FactoryHdmi3              = 0x01201017,   /* HDMI3 */ \
        Key_webOS_FactoryHdmi4              = 0x01201018,   /* HDMI4 */ \
        Key_webOS_FactoryRgbPc              = 0x01201019,   /* RGB */ \
        Key_webOS_FactoryEyeQ               = 0x01201020,   /* EYE */ \
        Key_webOS_FactoryPictureMode        = 0x01201021,   /* PSM */ \
        Key_webOS_FactorySoundMode          = 0x01201022,   /* SSM */ \
        Key_webOS_FactoryPictureCheck       = 0x01201023,   /* P-CHECK */ \
        Key_webOS_FactorySoundCheck         = 0x01201024,   /* S-CHECK */ \
        Key_webOS_FactoryMultiSoundSetting  = 0x01201025,   /* MPX */ \
        Key_webOS_FactoryTilt               = 0x01201026,   /* TILT */ \
        Key_webOS_FactoryPip                = 0x01201027,   /* PIP */ \
        Key_webOS_FactoryHdmiCheck          = 0x01201028,   /* HDMI HOT */ \
        Key_webOS_FactoryUsbCheck           = 0x01201029,   /* USB HOT */ \
        Key_webOS_FactoryUsb2Check          = 0x01201030,   /* USB HOT */ \
        Key_webOS_FactoryPowerOff           = 0x01201031,   /* 'discrete IR power off' */ \
        Key_webOS_FactoryPowerOn            = 0x01201032,   /* 'discrete IR power on' */ \
        Key_webOS_FactorySubstrate          = 0x01201033,   /* 'change mode to circuit board product' */ \
        Key_webOS_FactoryVolume30           = 0x01201034,   /* 'set volume to 30' */ \
        Key_webOS_FactoryVolume50           = 0x01201035,   /* 'set volume to 50' */ \
        Key_webOS_FactoryVolume80           = 0x01201036,   /* 'set volume to 80' */ \
        Key_webOS_FactoryVolume100          = 0x01201037,   /* 'set volume to 100' */ \
        Key_webOS_FactoryWhiteBalance       = 0x01201038,   /* 'adjust white balance' */ \
        Key_webOS_Factory3DPattern          = 0x01201039,   /* '3D pattern' */ \
        Key_webOS_FactorySelfDiagnosis      = 0x01201040,   /* 'self diagnosis' */ \
        Key_webOS_FactoryPatternCheck       = 0x01201041,   /* 'pattern check on p-only mode' */ \
        Key_webOS_FactoryQRCheck            = 0x01201042,   /* 'QR code check on p-only mode' */ \
        /* Another key codes for local keys (power only full-white mode) */ \
        Key_webOS_FactoryLocalUp            = 0x01201061, \
        Key_webOS_FactoryLocalDown          = 0x01201062, \
        Key_webOS_FactoryLocalLeft          = 0x01201063, \
        Key_webOS_FactoryLocalRight         = 0x01201064, \
        Key_webOS_FactoryLocalEnter         = 0x01201065, \
        Key_webOS_CecPower                  = 0x01202000, \
        Key_webOS_CecMediaHome              = 0x01202001, \
        Key_webOS_CecInfoMenu               = 0x01202002, \
        Key_webOS_CecInput                  = 0x01202003, \
        Key_webOS_CecTitlePopup             = 0x01202004, \
        Key_webOS_CecTvGuide                = 0x01202005, \
        Key_webOS_CecContentsMenu           = 0x01202006, \
        Key_webOS_CecSkipBack10             = 0x01202007, \
        Key_webOS_CecSkipForward30          = 0x01202008, \
        Key_webOS_MhlScreenRemote           = 0x01202032, \
        Key_webOS_VirtualTeleText           = 0x01202042, \
        /* For wearable */ \
        Key_webOS_Wearable_F1               = 0x01200400, \
        Key_webOS_Wearable_F2               = 0x01200401, \
        Key_webOS_Wearable_Home             = 0x01200402, \
        Key_webOS_Wearable_SRE              = 0x01200403, \
        Key_webOS_Wearable_Palm             = 0x01200404, \
        Key_webOS_Wearable_F3               = 0x01200405, \
        Key_webOS_Wearable_F4               = 0x01200406, \
        Key_webOS_Wearable_Back             = 0x01200500, \
        Key_webOS_Wearable_Menu             = 0x01200501, \
        Key_webOS_Wearable_Quick_Launch     = 0x01200502, \
        Key_webOS_Wearable_Launcher         = 0x01200503, \
        Key_webOS_Wearable_Swipe            = 0x01200504, \
        Key_webOS_Wearable_Next             = 0x01200405, \
        Key_webOS_Wearable_Previous         = 0x01200506, \
        Key_webOS_Wearable_Navi_Home        = 0x01200507, \
        Key_webOS_Wearable_Meta             = 0x01200508, \
        Key_webOS_Wearable_Flick            = 0x01200509, \
        Key_webOS_Wearable_Slider           = 0x01200510, \
        Key_webOS_Wearable_Optical          = 0x01200511, \
        Key_webOS_Wearable_Ringer           = 0x01200512, \
        Key_webOS_Wearable_Power            = 0x01200513, \
        Key_webOS_Wearable_Headset_Button   = 0x01200600, \
        Key_webOS_Wearable_Headset          = 0x01200601, \
        Key_webOS_Wearable_Headset_Mic      = 0x01200602, \
        Key_webOS_Wearable_Keyboard         = 0x01200603, \
        Key_webOS_Wearable_Repeat_All       = 0x01200700, \
        Key_webOS_Wearable_Repeat_Track     = 0x01200701, \
        Key_webOS_Wearable_Repeat_None      = 0x01200702, \
        Key_webOS_Wearable_Shuffle_On       = 0x01200703, \
        Key_webOS_Wearable_Shuffle_Off      = 0x01200704, \
    };

QT_BEGIN_NAMESPACE
namespace Qt {
    WEBOS_KEY_ENUM_DECLARATION;
}
QT_END_NAMESPACE

QT_END_HEADER

#endif // QWEBOSKEYEXTENSION_H
