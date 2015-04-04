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
;;menu options
opt1 db "press 1 for burns",10
opt1len equ $- opt1

opt2 db "press 2 for fractures",10
opt2len equ $- opt2

opt3 db "press 3 for poisoning",10
opt3len equ $- opt3

opt4 db "press 4 for insect bites",10
opt4len equ $- opt4

opt5 db "press 5 for drowning",10
opt5len equ $- opt5

opt6 db "press 6 for cuts",10
opt6len equ $- opt6

opt7 db "press 7 for inhalation/aspiration of foreign bodies",10
opt7len equ $- opt7


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;details of accidents

burn dw "A burn is a type of injury to flesh or skin caused by heat, electricity, chemicals, friction, or radiation.[1] Burns that affect only the superficial skin are known as superficial or first-degree burns. When damage penetrates into some of the underlying layers, it is a partial-thickness or second-degree burn. In a full-thickness or third-degree burn, the injury extends to all layers of the skin. A fourth-degree burn additionally involves injury to deeper tissues, such as muscle or bone.             Prevention :Historically, about half of all burns were deemed to be preventable.Burn prevention programs have significantly decreased rates of serious burns. Preventative measures include: limiting hot water temperatures, smoke alarms, sprinkler systems, proper construction of buildings, and fire-resistant clothing. Experts recommend setting water heaters below 48.8 °C (119.8 °F). Other measures to prevent scalds include using a thermometer to measure bath water temperatures, and splash guards on stoves. While the effect of the regulation of fireworks is unclear, there is tentative evidence of benefit with recommendations including the limitation of the sale of fireworks to children.",10
burnlen equ $- burn

frac dw "fractures....................",10
fraclen equ $- frac

poison dw "poison..................",10
poisonlen equ $- poison

insect dw "insect....................",10
insectlen equ $- insect

drown dw "drown.................................",10
drownlen equ $- drown

cuts dw "cuts.............................",10
cutslen equ $- cuts

inh dw "inhale....................",10
inhlen equ $- inh








;;;;;;;;;;;;;;;;;;;;;;
section .bss

choice resb 1

section .text
global _start

_start:

;displaying menu options on the screen
printf opt1,opt1len
printf opt2,opt2len
printf opt3,opt3len
printf opt4,opt4len
printf opt5,opt5len
printf opt6,opt6len
printf opt7,opt7len

;capturing the user`s choice
scanf choice,1

xor eax, eax
mov eax,choice
;;;;;implementation of if
mov edx,1
sub edx,1

CMP byte[choice],'1';
Je  .option1;



CMP byte[choice],'2'
JE  .option2



CMP byte[choice],'3'
JE  .option3


cmp byte[choice], '4'
je .option4


cmp byte[choice], '5'
je .option5


cmp byte[choice], '6'
je .option6


cmp byte[choice], '7'
je .option7


.option1:
	printf burn,burnlen
	jmp end
;

.option2:
	printf frac,fraclen
	jmp end
;
.option3:
	printf poison,poisonlen
	jmp end
;
.option4:
	printf insect, insectlen
	jmp end
;

.option5:
	printf drown,drownlen
	jmp end
;

.option6:
	printf cuts,cutslen
	jmp end
;

.option7:
	printf inh,inhlen
	jmp end
;

end:
	exit 0
;
