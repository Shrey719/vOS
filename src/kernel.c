#include <stdbool.h> // If stdbool ever gets OS specific functions I will slam my computer into a window
#include "drivers/display.h"
#include "drivers/keyboard.h"

void main(){
    while (true){
        char keyboard_current_char = getc();
        if (keyboard_current_char != -1 && keyboard_current_char != -2) {
            print_char(keyboard_current_char); 
        }
        if (keyboard_current_char == -2) { // -2 = backspace
            buf_amnt = buf_amnt - 2; // Backspace can into buffer overflow
        }
        while (keyboard_current_char == getc()){__asm__("nop");}
    }
}