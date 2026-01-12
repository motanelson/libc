//gcc -m32 -nostdlib -fno-pie -no-pie -I./include ./lib/libc.o strcats.c -o strcats
#include<libc.h>
int main(){
    char *c="hello world ";
    char *ccc="hi\n";
    char cc[4096]="";
    strcps(cc,c);
    strcats(cc,ccc);
    putss(cc);
    
    return 0;
}
