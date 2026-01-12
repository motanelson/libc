int main();
//extern int writess;
extern void _start();
extern void putss(char *c);
//extern int fputss;
extern void exitss(int c);
/*extern int strlens
extern int strcps
extern int strcats
extern int strncps
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