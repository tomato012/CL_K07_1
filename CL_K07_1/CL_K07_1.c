/*�쐬�ҁF1T(5) ���� ���V*/
/*�ۑ薼�F�ۑ�07_1*/
#include<stdio.h>

int inputValue10(int*);

int main(void)
{
	int ary[10];
	int *p;
	int i,cnt;

	p = ary;

	cnt = inputValue10(p);

	printf("�z��̒l�F");

	for(i = 0; i < 9; i++){
		printf("%d,",p[i]);
	}
	printf("%d\n",p[i]);

	printf("�z��ɓ��͂��ꂽ���v��%d�ł�\n",cnt);

	return 0;
}

int inputValue10(int *p)
{
	int i,cnt = 0;

	for(i = 0; i < 10; i++){
		printf("%d�Ԗڂ̗v�f�̒l����͂��Ă��������F",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
	}
	return cnt;
}