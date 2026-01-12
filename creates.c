//gcc -m32 -nostdlib -fno-pie -no-pie -I./include ./lib/libc.o strcps.c -o strcps
#include<libc.h>
int main(){
    char *c="my.txt";
    char cc[4096]="                 ";
    int i=0;
    i=creatss(c,0777);
    writess(c,6,i);
    closess(i);
    i=openss(c,0777,0);
    fgetss(cc,4095,i);
    prints(cc);
    closess(i);
    return 0;
}
