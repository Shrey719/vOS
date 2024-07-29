int buf_amnt = 0;

void print_char(char c) {
*(char*)(0xb8000+ buf_amnt)= c;
buf_amnt = buf_amnt + 2;
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
    print_char(str[i]);
}
}
