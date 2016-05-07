#include <os.h>
#include "libndls.h"
#include <nspireio/nspireio.h>
char *cmd = "";
bool quit = false;

void pushButton(){
    if(isKeyPressed(KEY_NSPIRE_0)) cmd = "0";
    if(isKeyPressed(KEY_NSPIRE_1)) cmd = "1";
    if(isKeyPressed(KEY_NSPIRE_2)) cmd = "2";
    if(isKeyPressed(KEY_NSPIRE_3)) cmd = "3";
    if(isKeyPressed(KEY_NSPIRE_4)) cmd = "4";
    if(isKeyPressed(KEY_NSPIRE_5)) cmd = "5";
    if(isKeyPressed(KEY_NSPIRE_6)) cmd = "6";
    if(isKeyPressed(KEY_NSPIRE_7)) cmd = "7";
    if(isKeyPressed(KEY_NSPIRE_8)) cmd = "8";
    if(isKeyPressed(KEY_NSPIRE_9)) cmd = "9";
    if(isKeyPressed(KEY_NSPIRE_A)) cmd = "A";
    if(isKeyPressed(KEY_NSPIRE_B)) cmd = "B";
    if(isKeyPressed(KEY_NSPIRE_C)) cmd = "C";
    if(isKeyPressed(KEY_NSPIRE_D)) cmd = "D";
    if(isKeyPressed(KEY_NSPIRE_E)) cmd = "E";
    if(isKeyPressed(KEY_NSPIRE_F)) cmd = "F";
    if(isKeyPressed(KEY_NSPIRE_G)) cmd = "G";
    if(isKeyPressed(KEY_NSPIRE_H)) cmd = "H";
    if(isKeyPressed(KEY_NSPIRE_I)) cmd = "I";
    if(isKeyPressed(KEY_NSPIRE_J)) cmd = "J";
    if(isKeyPressed(KEY_NSPIRE_K)) cmd = "K";
    if(isKeyPressed(KEY_NSPIRE_L)) cmd = "L";
    if(isKeyPressed(KEY_NSPIRE_M)) cmd = "M";
    if(isKeyPressed(KEY_NSPIRE_N)) cmd = "N";
    if(isKeyPressed(KEY_NSPIRE_O)) cmd = "O";
    if(isKeyPressed(KEY_NSPIRE_P)) cmd = "P";
    if(isKeyPressed(KEY_NSPIRE_Q)) cmd = "Q";
    if(isKeyPressed(KEY_NSPIRE_R)) cmd = "R";
    if(isKeyPressed(KEY_NSPIRE_S)) cmd = "S";
    if(isKeyPressed(KEY_NSPIRE_T)) cmd = "T";
    if(isKeyPressed(KEY_NSPIRE_U)) cmd = "U";
    if(isKeyPressed(KEY_NSPIRE_V)) cmd = "V";
    if(isKeyPressed(KEY_NSPIRE_W)) cmd = "W";
    if(isKeyPressed(KEY_NSPIRE_X)) cmd = "X";
    if(isKeyPressed(KEY_NSPIRE_Y)) cmd = "Y";
    if(isKeyPressed(KEY_NSPIRE_Z)) cmd = "Z";
    if(isKeyPressed(KEY_NSPIRE_ESC)) cmd = "ESC";
    if(isKeyPressed(KEY_NSPIRE_DEL)) cmd = "DEL";
    if(isKeyPressed(KEY_NSPIRE_ENTER)) cmd = "ENT";
    if(isKeyPressed(KEY_NSPIRE_RET)) cmd = "RET";
    if(isKeyPressed(KEY_NSPIRE_SPACE)) cmd = " ";
    if(isKeyPressed(KEY_NSPIRE_NEGATIVE)) cmd = "-";
    if(isKeyPressed(KEY_NSPIRE_PERIOD)) cmd = ".";
    if(isKeyPressed(KEY_NSPIRE_THETA)) cmd = "THETA";
    if(isKeyPressed(KEY_NSPIRE_COMMA)) cmd = ",";
    if(isKeyPressed(KEY_NSPIRE_PLUS)) cmd = "+";
    if(isKeyPressed(KEY_NSPIRE_eEXP)) cmd = "eEXP";
    if(isKeyPressed(KEY_NSPIRE_PI)) cmd = "PI";
    if(isKeyPressed(KEY_NSPIRE_QUES)) cmd = "QUES";
    if(isKeyPressed(KEY_NSPIRE_QUESEXCL)) cmd = "QUESEXCL";
    if(isKeyPressed(KEY_NSPIRE_MINUS)) cmd = "-";
    if(isKeyPressed(KEY_NSPIRE_TENX)) cmd = "TENX";
    if(isKeyPressed(KEY_NSPIRE_EE)) cmd = "EE";
    if(isKeyPressed(KEY_NSPIRE_COLON)) cmd = ":";
    if(isKeyPressed(KEY_NSPIRE_MULTIPLY)) cmd = "*";
    if(isKeyPressed(KEY_NSPIRE_SQU)) cmd = "SQU";
    if(isKeyPressed(KEY_NSPIRE_II)) cmd = "II";
    if(isKeyPressed(KEY_NSPIRE_QUOTE)) cmd = "\"";
    if(isKeyPressed(KEY_NSPIRE_DIVIDE)) cmd = "/";
    if(isKeyPressed(KEY_NSPIRE_TAN)) cmd = "TAN";
    if(isKeyPressed(KEY_NSPIRE_COS)) cmd = "COS";
    if(isKeyPressed(KEY_NSPIRE_SIN)) cmd = "SIN";
    if(isKeyPressed(KEY_NSPIRE_EXP)) cmd = "EXP";
    if(isKeyPressed(KEY_NSPIRE_GTHAN)) cmd = ">";
    if(isKeyPressed(KEY_NSPIRE_APOSTROPHE)) cmd = "'";
    if(isKeyPressed(KEY_NSPIRE_CAT)) cmd = "CAT";
    if(isKeyPressed(KEY_NSPIRE_FRAC)) cmd = "FRAC";
    if(isKeyPressed(KEY_NSPIRE_RP)) cmd = "RP";
    if(isKeyPressed(KEY_NSPIRE_LP)) cmd = "LP";
    if(isKeyPressed(KEY_NSPIRE_VAR)) cmd = "VAR";
    if(isKeyPressed(KEY_NSPIRE_DEL)) cmd = "DEL";
    if(isKeyPressed(KEY_NSPIRE_LTHAN)) cmd = "<";
    if(isKeyPressed(KEY_NSPIRE_FLAG)){ cmd = "FLAG";quit=true;}
    if(isKeyPressed(KEY_NSPIRE_CLICK)) cmd = "CLICK";
    if(isKeyPressed(KEY_NSPIRE_HOME)) cmd = "HOME";
    if(isKeyPressed(KEY_NSPIRE_MENU)) cmd = "MENU";
    if(isKeyPressed(KEY_NSPIRE_BAR)) cmd = "BAR";
    if(isKeyPressed(KEY_NSPIRE_TAB)) cmd = "TAB";
    if(isKeyPressed(KEY_NSPIRE_EQU)) cmd = "EQU";
    if(isKeyPressed(KEY_NSPIRE_UP)) cmd = "UP";
    if(isKeyPressed(KEY_NSPIRE_UPRIGHT)) cmd = "UPRIGHT";
    if(isKeyPressed(KEY_NSPIRE_RIGHT)) cmd = "RIGHT";
    if(isKeyPressed(KEY_NSPIRE_RIGHTDOWN)) cmd = "RIGHTDOWN";
    if(isKeyPressed(KEY_NSPIRE_DOWN)) cmd = "DOWN";
    if(isKeyPressed(KEY_NSPIRE_DOWNLEFT)) cmd = "DOWNLEFT";
    if(isKeyPressed(KEY_NSPIRE_LEFT)) cmd = "LEFT";
    if(isKeyPressed(KEY_NSPIRE_LEFTUP)) cmd = "LEFTUP";
    if(isKeyPressed(KEY_NSPIRE_SHIFT)) cmd = "SHIFT";
    if(isKeyPressed(KEY_NSPIRE_CTRL)) cmd = "CTRL";
    if(isKeyPressed(KEY_NSPIRE_DOC)) cmd = "DOC";
    if(isKeyPressed(KEY_NSPIRE_TRIG)) cmd = "TRIG";
    if(isKeyPressed(KEY_NSPIRE_SCRATCHPAD)) cmd = "SCRPAD";

    uart_puts(cmd);
    uart_puts("!");
}

void testPushButton(){
    uart_puts("key pressed!");
}

static const int hook_addrs[] = {0X1001E40C, 0X1001E378,  // Non-CAS 3.1 / CAS 3.1
                                 0X1001DB08, 0X1001DA9C,  // Non-CAS CX 3.1 / CAS CX 3.1
                                 0, 0X1001A538,  // CM 3.1 / CAS CM 3.1
                                 0X10020204, 0X1002016C,  // non-CAS 3.6 / CAS 3.6
                                 0X1001F754, 0X1001F6EC, //  non-CAS CX 3.6 / CAS CX 3.6
                                 0X10020610, 0X10020564, // ClickPad / Touchpad 3.9.0
                                 0, 0, // ClickPad / Touchpad 3.9.1
                                 0x1001fb54, 0x1001fad8, // CX 3.9.0
                                 0X1001FB54, 0X1001FAD8, // CX 3.9.1
                                 0X1001FB1C, 0X1001FAAC, // CX 4.0.0
                                 0X1001FBF4, 0X1001FB84, // CX 4.0.3
                                 0X10020028, 0X1001FFB8, // CX 4.2
                                                                };

HOOK_DEFINE(hook_pushButton) {
    testPushButton();
    HOOK_RESTORE_RETURN(hook_pushButton);
}

int main(int argc, char* argv[]){

    if(argc < 1) return 0;
    cmd = "URTX";
    uart_puts(cmd);
    uart_puts("!");
    HOOK_INSTALL(nl_osvalue((int*)hook_addrs, sizeof(hook_addrs)/sizeof(hook_addrs[0])), hook_pushButton);
    nl_set_resident();
    return 0;
}


