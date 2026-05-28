#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"
enum custom_keycodes {
    OS_MAC = QK_KB_0, //0x7E00 //QK_KB_0
    EZ_WLOK,
    KC_SIRI,
    KC_DND,
    EZ_RGBT,
    EZ_REST,
    EZ_PRO0,
    EZ_PRO1,
    EZ_PRO2,
    EZ_PROL,    //配置文件循环
    EZ_RTST,    //离线RT配置模式
    NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};
