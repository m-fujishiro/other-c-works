#include<stdio.h>
#include<conio.h>

void ppak()
{

	//�L�[�{�[�h�ɓ����Ă��镶����̏�����
	while(1){
	if(_kbhit()){ _getch(); }
	else break;
	};

	//�L�[���͂��������烋�[�v�𔲂���
	while(1){
	if(_kbhit()){ _getch();break; }
	};

}

int main(void){

	puts("�}�T�J���𓊂��Ȃ��ł�������");

	puts("   _______�Q______  ");
	puts(" �^             �^|");
	puts("|�P�P�P�P�P�P�P|  |");
	puts("|  �}�T�J����  |  |");
	puts("|�@ ���̒���   |  / ");
	puts("|              | /");
	puts("�P�P�P�P�P�P�P�P");

	ppak();

	return 0;

}


