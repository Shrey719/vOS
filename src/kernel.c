#include <stdbool.h> // If stdbool ever gets OS specific functions I will slam my computer into a window
#include "drivers/display.h"
#include "drivers/keyboard.h"

void main(){
    while (true){
        char keyboard_current_char = getc();
        if (keyboard_current_char != -1 && keyboard_current_char != -2) {
            print_char(2, keyboard_current_char); 
        }
        if (keyboard_current_char == -2) { // -2 = backspace
        if (buf_amnt > 0) {
            print_char(-2, '\0');
        }
        }
        while (keyboard_current_char == getc()){__asm__("nop");}
    }
}