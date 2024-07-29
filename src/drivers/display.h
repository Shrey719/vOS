#pragma once

int buf_amnt = 0;


void print_char(int decinc, char c) {
    *(char*)(0xb8000+ buf_amnt)= c; // weird hack, but basicly writes to the first VRAM thing and then increments two adresses 
    buf_amnt = buf_amnt + decinc; // as I said, weird hack
}

unsigned int strlen(char* str)
{
    unsigned int length = 0;
    while (*str != 0)
    {
        str++;
        length++;
    }
    return length;
}

void print(char* str) {
for (int i = 0; i < strlen(str); i++) {
    print_char(2, str[i]); // Is this even needed? we may never know...
}
}

