%macro printf 2;
	mov eax,4;system write
	mov ebx,1;stdout
	mov ecx,%1;message to write
	mov edx,%2;message length
	int 80h;interupt
%endmacro;end macro

%macro scanf 2;
	mov eax,3;system read
	mov ebx,2;stdin
	mov ecx,%1;message to read
	mov edx,%2;message length
	int 80h;interupt
%endmacro;end macro

%macro exit 1
	mov eax,1
	mov ebx,%1
	int 80h
%endmacro


section .data

msg1 db 'enter a number: '
lenmsg1 equ $- msg1

section .bss
num resb 5

section .text

global _start
_start:

printf msg1,lenmsg1
scanf num,5
;printf 'you entered: ',50
printf num,5

mov eax,1
mov ebx,0
int 80h
