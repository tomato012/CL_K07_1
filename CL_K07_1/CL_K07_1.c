/*�쐬�ҁF1T(5) ���� ���V*/
/*�ۑ薼�F�ۑ�07_1*/
#include<stdio.h>

int inputValue(int*);

int main(void)
{
	int ary[5];
	int *p;
	int i,cnt;

	i = 0;

	p = ary;

	cnt = inputValue(p);

	printf("�z��̒l�F");

	while(i < 4){
		printf("%d,",p[i]);
		i++;
	}
	printf("%d\n",p[i]);

	printf("�z��ɓ��͂��ꂽ���v��%d�ł�\n",cnt);

	return 0;
}

int inputValue(int *p)
{
	int i = 0,cnt = 0;

	while(i < 5){
		printf("%d�Ԗڂ̗v�f�̒l����͂��Ă��������F",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
		i++;
	}
	return cnt;
}