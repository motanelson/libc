int main();
extern void _start();
extern void putss(char *c);
extern void writess(char *c,int i,int f);
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
extern void fgetss(char *c,int i,int f);
extern void clearss();
extern int strchrreplace(char *c,char cc,char ccc);
extern int creatss(char *c,int a);
extern void closess(int i);
extern int openss(char *c,int i, int ii);
extern void strs(int i,char *x);
/*
extern int getreadss();
extern int getwritess();
extern int getreadwritess();
extern int getesp();
*/

static inline void get_argc_argv(int *argc, char ***argv) {
    
}

void _start(){
    int i=main();

    exitss(i);   

}