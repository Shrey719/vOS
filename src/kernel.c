#include <stdbool.h> // If stdbool ever gets OS specific functions I will slam my computer into a window
#include "drivers/display.h"
#include "drivers/keyboard.h"

void main(){
    while (true){
        char keyboard_current_char = getc();
        if (keyboard_current_char != -1) {
            print_char(keyboard_current_char); 
        }
        while (keyboard_current_char == getc()){__asm__("nop");}
    }
}