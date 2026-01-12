//gcc -m32 -nostdlib -fno-pie -no-pie -I./include ./lib/libc.o strcps.c -o strcps
#include<libc.h>
int main(){
    char *c="hello world\n";
    char cc[4096]="                 ";
    strncps(cc,c,6);
    putss(cc);
    
    return 0;
}
