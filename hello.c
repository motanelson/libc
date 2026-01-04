//gcc -m32 -nostdlib -I./include ./lib/libc.o ./lib/crt.o hello.c -o hello
#include<libc.h>

int main(){
    char *c="hello world\n";
    putss(c);
    exitss(0);
    return 0;
}