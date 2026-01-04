#as -32 -o crt.o crt.asm
.intel_syntax noprefix
.extern _starts
.extern _exits
.global start
.global _start
.global _exit


start:
nop
_start:
jmp _starts
_exit:
jmp _exits
