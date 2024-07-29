int buf_amnt = 0;

void print_char(char c) {
*(char*)(0xb8000+ buf_amnt)= c;
buf_amnt = buf_amnt + 2;
}