    #include <os.h>
    #include "libndls.h"
    #include <nspireio/nspireio.h>
    static const t_key KEY_NSPIRE_ON = KEY_(0x10, 0x200);
    char *cmd = "";

    static const int key_hook_addrs[] = {0x100B66C8, 0x100B6988,  // Clickpad / Touchpad 3.1
                                     0x100EAAAC, 0x100EADC4,  // CX 3.1
                                     0x100E72CC, 0x100E75E4,  // CM 3.1
                                     0x101122b8, 0x100eb288,  // Clickpad / Touchpad 3.6
                                     0x10111cfc, 0x1011201C, // CX 3.6
                                                                     0x101184C0, 0, // ClickPad / Touchpad 3.9.0
                                     0, 0, // ClickPad / Touchpad 3.9.1
                                     0, 0, // CX 3.9.0
                                                                     0, 0x101184B0, // CX 3.9.1
                                                                     0, 0, // CX 4.0.0
                                                                     0x1011EF68, 0x1011EDB8, // CX 4.0.3
                                                                    0x1006A230, 0x10069cf0, // CX 4.2
                                                                    };

    static const int pad_hook_addrs[] = {0x100B66C8, 0x100B6988,  // Clickpad / Touchpad 3.1
                                     0x100EAAAC, 0x100EADC4,  // CX 3.1
                                     0x100E72CC, 0x100E75E4,  // CM 3.1
                                     0x101122b8, 0x100eb288,  // Clickpad / Touchpad 3.6
                                     0x10111cfc, 0x1011201C, // CX 3.6
                                                                     0x101184C0, 0, // ClickPad / Touchpad 3.9.0
                                     0, 0, // ClickPad / Touchpad 3.9.1
                                     0, 0, // CX 3.9.0
                                                                     0, 0x101184B0, // CX 3.9.1
                                                                     0, 0, // CX 4.0.0
                                                                     0x1011EF68, 0x1011EDB8, // CX 4.0.3
                                                                    0x1022F2D0, 0x1022f834, // CX 4.2
                                                                    };

    void testPushButton(){
        uart_puts("key pressed!\n");
    }


    void keyPushButton(){
        if (isKeyPressed(KEY_NSPIRE_TAB))
            cmd = "\t";
        if (isKeyPressed(KEY_NSPIRE_ENTER))
            cmd = "\n";
        if (isKeyPressed(KEY_NSPIRE_DEL))
            cmd = "\b";
        if (isKeyPressed(KEY_NSPIRE_A))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "A" : "a";
        if (isKeyPressed(KEY_NSPIRE_B))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "B" : "b";
        if (isKeyPressed(KEY_NSPIRE_C))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "C" : "c";
        if (isKeyPressed(KEY_NSPIRE_D))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "D" : "d";
        if (isKeyPressed(KEY_NSPIRE_E))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "E" : "e";
        if (isKeyPressed(KEY_NSPIRE_F))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "F" : "f";
        if (isKeyPressed(KEY_NSPIRE_G))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "G" : "g";
        if (isKeyPressed(KEY_NSPIRE_H))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "H" : "h";
        if (isKeyPressed(KEY_NSPIRE_I))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "I" : "i";
        if (isKeyPressed(KEY_NSPIRE_J))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "J" : "j";
        if (isKeyPressed(KEY_NSPIRE_K))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "K" : "k";
        if (isKeyPressed(KEY_NSPIRE_L))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "L" : "l";
        if (isKeyPressed(KEY_NSPIRE_M))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "M" : "m";
        if (isKeyPressed(KEY_NSPIRE_N))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "N" : "n";
        if (isKeyPressed(KEY_NSPIRE_O))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "O" : "o";
        if (isKeyPressed(KEY_NSPIRE_P))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "P" : "p";
        if (isKeyPressed(KEY_NSPIRE_Q))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "Q" : "q";
        if (isKeyPressed(KEY_NSPIRE_R))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "R" : "r";
        if (isKeyPressed(KEY_NSPIRE_S))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "S" : "s";
        if (isKeyPressed(KEY_NSPIRE_T))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "T" : "t";
        if (isKeyPressed(KEY_NSPIRE_U))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "U" : "u";
        if (isKeyPressed(KEY_NSPIRE_V))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "V" : "v";
        if (isKeyPressed(KEY_NSPIRE_W))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "W" : "w";
        if (isKeyPressed(KEY_NSPIRE_X))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "X" : "x";
        if (isKeyPressed(KEY_NSPIRE_Y))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "Y" : "y";
        if (isKeyPressed(KEY_NSPIRE_Z))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "Z" : "z";
        if (isKeyPressed(KEY_NSPIRE_1))
            cmd = "1";
        if (isKeyPressed(KEY_NSPIRE_2))
            cmd = "2";
        if (isKeyPressed(KEY_NSPIRE_3))
            cmd = "3";
        if (isKeyPressed(KEY_NSPIRE_4))
            cmd = "4";
        if (isKeyPressed(KEY_NSPIRE_5))
            cmd = "5";
        if (isKeyPressed(KEY_NSPIRE_6))
            cmd = "6";
        if (isKeyPressed(KEY_NSPIRE_7))
            cmd = "7";
        if (isKeyPressed(KEY_NSPIRE_8))
            cmd = "8";
        if (isKeyPressed(KEY_NSPIRE_9))
            cmd = "9";
        if (isKeyPressed(KEY_NSPIRE_0))
            cmd = "0";
        if (isKeyPressed(KEY_NSPIRE_SPACE))
            cmd = " ";
        if (isKeyPressed(KEY_NSPIRE_PERIOD))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? ":" : ".";
        if (isKeyPressed(KEY_NSPIRE_COLON))
            cmd = ":";
        if (isKeyPressed(KEY_NSPIRE_COMMA)){
                    if (isKeyPressed(KEY_NSPIRE_SHIFT))
                            cmd = ";";
                    if (isKeyPressed(KEY_NSPIRE_CTRL))
                            cmd = "`";
                    else
                            cmd = ",";
            }
        if (isKeyPressed(KEY_NSPIRE_QUESEXCL) || isKeyPressed(KEY_NSPIRE_QUES))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "!" : "?";
        if (isKeyPressed(KEY_NSPIRE_PLUS))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "&" : "+";
        if (isKeyPressed(KEY_NSPIRE_NEGATIVE) || isKeyPressed(KEY_NSPIRE_MINUS)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = "_";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "~";
            else
                cmd = "-";
        }
        if (isKeyPressed(KEY_NSPIRE_MULTIPLY))
            cmd = isKeyPressed(KEY_NSPIRE_SHIFT) ? "#" : "*";
        if (isKeyPressed(KEY_NSPIRE_DIVIDE)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = "\\";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "|";
            else
                cmd = "/";
        }
        if (isKeyPressed(KEY_NSPIRE_BAR))
            cmd = "|";
        if (isKeyPressed(KEY_NSPIRE_QUOTE))
            cmd = "\"";
        if (isKeyPressed(KEY_NSPIRE_APOSTROPHE))
            cmd = "'";
        if (isKeyPressed(KEY_NSPIRE_EXP)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = "'";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "\"";
            else
                cmd = "^";
        }
        if (isKeyPressed(KEY_NSPIRE_EQU)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = ">";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "<";
            else
                cmd = "= ";
        }
        if (isKeyPressed(KEY_NSPIRE_LTHAN))
            cmd = "<";
        if (isKeyPressed(KEY_NSPIRE_GTHAN))
            cmd = ">";
        if (isKeyPressed(KEY_NSPIRE_LP)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = "[";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "{";
            else
                cmd = "(";
        }
        if (isKeyPressed(KEY_NSPIRE_RP)) {
            if (isKeyPressed(KEY_NSPIRE_SHIFT))
                cmd = "]";
            if (isKeyPressed(KEY_NSPIRE_CTRL))
                cmd = "}";
            else
                cmd = ")";
        }
        if (isKeyPressed(KEY_NSPIRE_FLAG)) {
                    if (isKeyPressed(KEY_NSPIRE_SHIFT))
                            cmd = "$";
                    if (isKeyPressed(KEY_NSPIRE_CTRL))
                            cmd = "@";
            cmd = "%";
        }
        if(isKeyPressed(KEY_NSPIRE_ESC)) cmd = "ESC";
        if(isKeyPressed(KEY_NSPIRE_DEL)) cmd = "DEL";
        if(isKeyPressed(KEY_NSPIRE_ENTER)) cmd = "ENT";
        if(isKeyPressed(KEY_NSPIRE_RET)) cmd = "RET";
        if(isKeyPressed(KEY_NSPIRE_THETA)) cmd = "THETA";
        if(isKeyPressed(KEY_NSPIRE_eEXP)) cmd = "eEXP";
        if(isKeyPressed(KEY_NSPIRE_PI)) cmd = "PI";
        if(isKeyPressed(KEY_NSPIRE_TENX)) cmd = "TENX";
        if(isKeyPressed(KEY_NSPIRE_EE)) cmd = "EE";
        if(isKeyPressed(KEY_NSPIRE_SQU)) cmd = "SQU";
        if(isKeyPressed(KEY_NSPIRE_II)) cmd = "II";
        if(isKeyPressed(KEY_NSPIRE_TAN)) cmd = "TAN";
        if(isKeyPressed(KEY_NSPIRE_COS)) cmd = "COS";
        if(isKeyPressed(KEY_NSPIRE_SIN)) cmd = "SIN";
        if(isKeyPressed(KEY_NSPIRE_EXP)) cmd = "EXP";
        if(isKeyPressed(KEY_NSPIRE_CAT)) cmd = "CAT";
        if(isKeyPressed(KEY_NSPIRE_FRAC)) cmd = "FRAC";
        if(isKeyPressed(KEY_NSPIRE_VAR)) cmd = "VAR";
        if(isKeyPressed(KEY_NSPIRE_DEL)) cmd = "DEL";
        if(isKeyPressed(KEY_NSPIRE_FLAG)){ cmd = "FLAG";
        HOOK_UNINSTALL(nl_osvalue((int*)pad_hook_addrs, sizeof(pad_hook_addrs)/sizeof(pad_hook_addrs[0])), hook_padPushButton);
        HOOK_UNINSTALL(nl_osvalue((int*)key_hook_addrs, sizeof(key_hook_addrs)/sizeof(key_hook_addrs[0])), hook_keyPushButton);

        }
        if(isKeyPressed(KEY_NSPIRE_CLICK)) cmd = "CLICK";
        if(isKeyPressed(KEY_NSPIRE_ON)) cmd = "ON";
        if(isKeyPressed(KEY_NSPIRE_MENU)) cmd = "MENU";
        if(isKeyPressed(KEY_NSPIRE_SHIFT)) cmd = "SHIFT";
        if(isKeyPressed(KEY_NSPIRE_CTRL)) cmd = "CTRL";
        if(isKeyPressed(KEY_NSPIRE_DOC)) cmd = "DOC";
        if(isKeyPressed(KEY_NSPIRE_TRIG)) cmd = "TRIG";
        if(isKeyPressed(KEY_NSPIRE_SCRATCHPAD)) cmd = "SCRPAD";

        if(isKeyPressed(KEY_NSPIRE_UP)) cmd = "UP";
        if(isKeyPressed(KEY_NSPIRE_UPRIGHT)) cmd = "UPRIGHT";
        if(isKeyPressed(KEY_NSPIRE_RIGHT)) cmd = "RIGHT";
        if(isKeyPressed(KEY_NSPIRE_RIGHTDOWN)) cmd = "RIGHTDOWN";
        if(isKeyPressed(KEY_NSPIRE_DOWN)) cmd = "DOWN";
        if(isKeyPressed(KEY_NSPIRE_DOWNLEFT)) cmd = "DOWNLEFT";
        if(isKeyPressed(KEY_NSPIRE_LEFT)) cmd = "LEFT";
        if(isKeyPressed(KEY_NSPIRE_LEFTUP)) cmd = "LEFTUP";
        uart_puts(cmd);
        uart_puts("!\n");
    }

    void padPushButton(){
        if(isKeyPressed(KEY_NSPIRE_UP)) cmd = "UP";
        if(isKeyPressed(KEY_NSPIRE_UPRIGHT)) cmd = "UPRIGHT";
        if(isKeyPressed(KEY_NSPIRE_RIGHT)) cmd = "RIGHT";
        if(isKeyPressed(KEY_NSPIRE_RIGHTDOWN)) cmd = "RIGHTDOWN";
        if(isKeyPressed(KEY_NSPIRE_DOWN)) cmd = "DOWN";
        if(isKeyPressed(KEY_NSPIRE_DOWNLEFT)) cmd = "DOWNLEFT";
        if(isKeyPressed(KEY_NSPIRE_LEFT)) cmd = "LEFT";
        if(isKeyPressed(KEY_NSPIRE_LEFTUP)) cmd = "LEFTUP";

        uart_puts(cmd);
        uart_puts("!\n");

    }

    HOOK_DEFINE(hook_keyPushButton){
        keyPushButton();
        HOOK_RESTORE_RETURN(hook_keyPushButton);
    }
    HOOK_DEFINE(hook_padPushButton){
        padPushButton();
        HOOK_RESTORE_RETURN(hook_padPushButton);
    }

    int main(int argc, char* argv[]){

        cmd = "URTX";
        uart_puts(cmd);
        uart_puts("!\n");
        HOOK_INSTALL(nl_osvalue((int*)pad_hook_addrs, sizeof(pad_hook_addrs)/sizeof(pad_hook_addrs[0])), hook_padPushButton);
        HOOK_INSTALL(nl_osvalue((int*)key_hook_addrs, sizeof(key_hook_addrs)/sizeof(key_hook_addrs[0])), hook_keyPushButton);
        nl_set_resident();
        return 0;
    }


