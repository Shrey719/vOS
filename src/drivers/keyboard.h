#pragma once
#include "ports.h"
#include <stdbool.h>

const int KEYBOARD_PORT = 0x60;
bool isShifted = false;
char buffer[] = "";
// BIG   ASS   ENUM
enum {
    ESC_PRS = 0x01,
    ONE_PRS = 0x02,
    TWO_PRS = 0x03,
    THREE_PRS = 0x04,
    FOUR_PRS = 0x05,
    FIVE_PRS = 0x06,
    SIX_PRS = 0x07, 
    SEVEN_PRS = 0x08,
    EIGHT_PRS = 0x09, 
    NINE_PRS = 0x0A,
    ZERO_PRS = 0x0B,
    DASH_PRS = 0x0C, 
    EQUAL_PRS = 0x0D,
    BACKSPACE_PRS = 0x0E,
    TAB_PRS = 0x0F,
    Q_PRS = 0x10,
    W_PRS = 0x11,
    E_PRS = 0x12,
    R_PRS = 0x13,
    T_PRS = 0x14,
    Y_PRS = 0x15,
    U_PRS = 0x16,
    I_PRS = 0x17, 
    O_PRS = 0x18,
    P_PRS = 0x19,
    LBRACK_PRS = 0x1A,
    RBRACK_PRS = 0x1B,
    ENTER_PRS = 0x1C,
    A_PRS = 0x1E,
    S_PRS = 0x1F,
    D_PRS = 0x20,
    F_PRS = 0x21,
    G_PRS = 0x22,
    H_PRS = 0x23,
    J_PRS = 0x24,
    K_PRS = 0x25,
    L_PRS = 0x26,
    SEMICOLON_PRS = 0x27,
    SINGLEQUOTE_PRS = 0x28,
    BACKTICK_PRS = 0x29,
    LSHIFT_PRS = 0x2A, 
    BSLASH_PRS = 0x2B,
    Z_PRS = 0x2C,
    X_PRS = 0x2D,
    C_PRS = 0x2E,
    V_PRS = 0x2F,
    B_PRS = 0x30,
    N_PRS = 0x31,
    M_PRS = 0x32,
    COMMA_PRS = 0x33,
    PERIOD_PRS = 0x34,
    SLASH_PRS = 0x35,
    RSHIFT_PRS = 0x36, 
    LALT = 0x38,
    SPACE_PRS = 0x39, 
    CAPSLOCK_PRS = 0x3A,




    ESC_REL = 0x81, 
    ONE_REL = 0x82,
    TWO_REL = 0x83,
    THREE_REL = 0x84,
    FOUR_REL = 0x85, 
    FIVE_REL = 0x86, 
    SIX_REL = 0x87,
    SEVEN_REL = 0x88,
    EIGHT_REL = 0x89,
    NINE_REL = 0x8A, 
    ZERO_REL = 0x8B, 
    DASH_REL = 0x8C,
    EQUAL_REL = 0x8D,
    BSAPCE_REL = 0x8E,
    TAB_REL = 0x8F,
    Q_REL = 0x90,
    W_REL = 0x91,
    E_REL = 0x92, 
    R_REL = 0x93, 
    T_REL = 0x94,
    Y_REL = 0x95,
    U_REL = 0x96, 
    I_REL = 0x97, 
    O_REL = 0x98, 
    P_REL = 0x99,
    LBRACK_REL = 0x9A, 
    RBRACK_REL = 0x9B,
    ENTER_REL = 0x9C, 
    LCTRL_REL = 0x9D,
    RSHIFT_REL = 0xB6,
    LSHIFT_REL = 0xAA,
};
//BIG ASS FUNCTION`
char scan_tochar(int n) {
	if (n == ONE_PRS) {
        return '1';
    } 
    if (n == TWO_PRS) {
        return '2';
    } else if (n == THREE_PRS) {
        return '3';
    } else if (n == FOUR_PRS) {
        return '4';
    } else if (n == FIVE_PRS) {
        return '5';
    } else if (n == SIX_PRS) {
        return '6';
    } else if (n == SEVEN_PRS) {
        return '7';
    } else if (n == EIGHT_PRS) {
        return '8';
    } else if (n == NINE_PRS) {
        return '9';
    } else if (n == ZERO_PRS) {
        return '0';
    } else if (n == Q_PRS) {
        return 'Q';
    } else if (n == W_PRS) {
        return 'W';
    } else if (n == R_PRS) {
        return 'R';
    } else if (n == T_PRS) {
        return 'T';
    } else if (n == Y_PRS) {
        return 'Y';
    } else if (n == U_PRS) {
        return 'U';
    } else if (n == I_PRS) {
        return 'I';
    } else if (n == O_PRS) {
        return 'O';
    } else if (n == P_PRS) {
        return 'P';
    } else if (n == A_PRS) {
        return 'A';
    } else if (n == S_PRS) {
        return 'S';
    } else if (n == D_PRS) {
        return 'D';
    } else if (n == F_PRS) {
        return 'F';
    } else if (n == G_PRS) {
        return 'G';
    } else if (n == H_PRS) {
        return 'H';
    } else if (n == J_PRS) {
        return 'J';
    } else if (n == K_PRS) {
        return 'K';
    } else if (n == L_PRS) {
        return 'L';
    } else if (n == Z_PRS) {
        return 'Z';
    } else if (n == X_PRS) {
        return 'X';
    } else if (n == C_PRS) {
        return 'C';
    } else if (n == V_PRS) {
        return 'V';
    } else if (n == B_PRS) {
        return 'B';
    } else if (n == N_PRS) {
        return 'N';
    } else if (n == M_PRS) {
        return 'M';
    } else if (n == E_PRS) {
        return 'E';
    } else if (n == SPACE_PRS) {
        return ' ';
    } else if (n == BACKSPACE_PRS) {
        return -2; // -2 == BACKSPACE PRESSED
    } else if (n == 0x3B){ // F1 pressed 
        return 0x01;
    } else if (n == 0x3C) { //F2 pressed
        return 0x02;
    } else if (n == COMMA_PRS) {
        if (isShifted) {
            return '<';
        } else {
        return ',';
        }
    } else if (n == SEMICOLON_PRS) {
        if (isShifted) {
            return ':';
        } else {
            return ';';
        }
    } else if (n == 0x28) { // 0x28 == single quote scancode
        return 0x27; // quotes cannot be written in string format
    } else if (n == LSHIFT_PRS) {
        isShifted = true;
        return -1; // Too scared to delete
    }  else if (n == ENTER_PRS) {
		return '\n';
    }  else {
        return -1; // -1 = INVALID_CHAR
    } 
}

char getc() {

    return scan_tochar(port_byte_in(0x60));
}
void append_char(char *str, char c) {
    while (*str != '\0') {
        str++;
    }
    
    *str = c;
    
    *(str + 1) = '\0';
}
