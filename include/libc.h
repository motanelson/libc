int main();
//extern int writess;
extern void _start();
extern void putss(char *c);
//extern int fputss;
extern void exitss(int c);
extern int strcats(char *c,char *cc);
extern int strcps(char *c,char *cc);
extern int strncps(char *c,char *cc,int i);
extern int memcps(char *c,char *cc,int i);

/*
extern int strlens
extern int memcps
extern int prints
extern int memfills
extern int getout
extern int getin
extern int fgetss
extern int creatss
extern int closess
extern int strchrreplace
extern int openss
extern int getreadss
extern int getwritess
extern int getreadwritess
extern int clearss
extern int getesp
*/



void _start(){
    int a=main();
    exitss(a);

}