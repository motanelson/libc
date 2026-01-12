//gcc -m32 -nostdlib -fno-pie -no-pie -I./include ./lib/libc.o strcps.c -o strcps
#include<libc.h>
int main(){
    char *c="give me a message ? \n";
    char cc[4096]="                 ";
    prints(c);
    fgetss(cc,8,0);
    prints(cc);
    return 0;
}
