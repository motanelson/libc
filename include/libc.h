int main();
//extern int writess;
extern void _start();
extern void putss(char *c);

extern void exitss(int c);
extern void strcats(char *c,char *cc);
extern void strcps(char *c,char *cc);
extern void strncps(char *c,char *cc,int i);
extern void memcps(char *c,char *cc,int i);
extern void prints(char *c);
extern void memfills(char *c,int i,char cc);
extern int strlens(char *c);
extern void fputss(char *c,int f);
extern int getout();
extern int getin();

/*


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