#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>

/*
*
*	a[0]x^n + a[1]x^(n-1)���a[n-1]x+a[n]
*
*/


int getn_10(void);
int tf(void);

void ppak()
{
	while (1) {
		if (_kbhit()) { _getch(); }
		else break;
	};

	while (1) {
		if (_kbhit()) break;
	};
}


void main(void)
{
	int a[100] = { 0 }; char n = 5, x = 3;  int bl = 0, i = 0;



	puts("a[n]x^n+a[n-1]x^(n-1)���a[1]x+a[0]���v�Z���܂��B");

	//n�����
	do {
		puts("n�̕�����10�i���œ��͂��Ă��������B");
		n = getn_10();
		printf("n = %d �ł�낵���ł����H yes(y) or no(n)\n", n);
		bl = tf();
	} while (bl != 1);

	puts("");

	//a�����{
	while (i < n) {
		printf("������%d�Ԗڂ�a����͂��Ă��������B\n", i + 1);
		a[i] = getn_10();

		printf("a[%d] = %d �ł�낵���ł����H yes(y) or no(n) \n", n - i, a[i]);
		bl = tf();

		if (bl == 1)i++;
	}

	puts("");

	//x�����
	do {
		puts("x�̕�����10�i���œ��͂��Ă��������B");
		n = getn_10();
		printf("x = %d �ł�낵���ł����H yes(y) or no(n)\n", x);
		bl = tf();
	} while (bl != 1);

	puts("");

	puts("�v�Z��");



	//���o�� //�R�[�f�B���O����
	printf("%dx^%d", a[0], n);
	for (i = 1; i < n; i++) {
		if (a[i] > 0) printf(" + %dx^%d", a[i], n-i);
		else if (a[i] < 0) printf(" - %dx^%d", a[i], n-i);
	}
	if (a[i] > 0) printf(" + %d", a[i]);
	else if (a[i] < 0) printf(" - %d", a[i]);

	//�v�Z //�R�[�f�B���O����
	int num = a[0] * x + a[1];
	for (i = 2; i <= n; i++){
		num = num * x + a[i];
	}
	//�����o��
	printf("\nf(%d) = %d", x, num);

	ppak();

}

int getn_10()
{
	int i = 0,j=0,num = 0;

	/*while (radix > 9)radix /= 10;*/

	/*���ꂪ��������*/
	/*char *user;
	user = (char *)malloc(radix);	*/

	char user[2] = {0};

	do{

		do {
			
			user[i] = _getch();
				
			if ((user[i] == ' ') || (user[i] == 0x0d)){j = 1; break;}
			
			else if (user[i] == '\b') {
				switch (i) {
					case 0:i--; user[i] = 0;break;
					case 1:printf("\b \b");i=0; user[i] = 0;break;
				}
			}
		
			else if (user[i] > '9'){
				user[i] = 0;i--;
			}

			else printf("%c", user[i]);
		
			i++;j=0;
		} while (i < 2);

	if(j == 1) num = user[0] - '0';
	else num = user[1] - '0' + ((user[0] - '0') * 10);
	
	}while (num <= 0);
	puts("");

//	for (; i >= 0; i--)num += (user[i] - '0') * pow(10, i);
	return num;
}

int tf(void)
{
	char user = 0;

	while ((user != 'y') && (user != 'n'))user = _getch();

	if (user == 'y') return 1;
	if (user == 'n') return 0;

	return -1;
}