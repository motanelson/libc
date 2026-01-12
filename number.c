//gcc -m32 -nostdlib -fno-pie -no-pie -I./include ./lib/libc.o strcps.c -o strcps
#include<libc.h>
int main(int argc, char *argv[]){
    char *c="hello world\n";
    char cc[4096]="                                             ";
    int n=0;
    for(n=0;n<10;n++){
        strs(n,cc);
        prints(cc);
    }
    return 0;
}
