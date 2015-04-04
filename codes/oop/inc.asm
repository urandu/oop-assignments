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

section .data

newline db 10  ; carriage return;

count db 3;initialized variable to 3
msg1 dw 'the initial value is: '
lmsg1 equ $- msg1

msg2 dw 'after increament,the value is: '

lmsg2 equ $- msg2

section .text

global _start
_start:

printf msg1,lmsg1
printf newline,1

printf count,1
printf newline,1
INC byte[count]

;INC byte[count]

printf msg2,lmsg2
printf newline,1
printf count,1

;exit
mov eax,1
mov ebx,0
int 80h
