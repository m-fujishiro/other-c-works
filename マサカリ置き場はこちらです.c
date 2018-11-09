#include<stdio.h>
#include<conio.h>

void ppak()
{

	//ƒL[ƒ{[ƒh‚É“ü‚Á‚Ä‚¢‚é•¶š—ñ‚Ì‰Šú‰»
	while(1){
	if(_kbhit()){ _getch(); }
	else break;
	};

	//ƒL[“ü—Í‚ª‚ ‚Á‚½‚çƒ‹[ƒv‚ğ”²‚¯‚é
	while(1){
	if(_kbhit()){ _getch();break; }
	};

}

int main(void){

	puts("ƒ}ƒTƒJƒŠ‚ğ“Š‚°‚È‚¢‚Å‚­‚¾‚³‚¢");

	puts("   _______Q______  ");
	puts(" ^             ^|");
	puts("|PPPPPPP|  |");
	puts("|  ƒ}ƒTƒJƒŠ‚Í  |  |");
	puts("|@ ‚±‚Ì’†‚Ö   |  / ");
	puts("|              | /");
	puts("PPPPPPPP");

	ppak();

	return 0;

}


