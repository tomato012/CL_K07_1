/*�쐬�ҁF1T(5) ���� ���V*/
/*�ۑ薼�F�ۑ�07_1*/
#include<stdio.h>
#include<stdlib.h>

int inputValue(int*,int);

int main(void)
{
	int *p;
	int i = 0,ary,cnt;

	printf("�z��̐������߂Ă��������F");
	scanf("%d",&ary);

	p = (int*)malloc(sizeof(int) * ary);
	if(p == NULL){
		exit(EXIT_FAILURE);
	}

	cnt = inputValue(p,ary);

	printf("�z��̒l�F");

	while(i < ary){
		printf("%d,",p[i]);
		i++;
	}
	printf("\n");

	printf("�z��ɓ��͂��ꂽ���v��%d�ł�\n",cnt);

	free(p);

	return 0;
}

int inputValue(int *p,int ary)
{
	int i = 0,cnt = 0;

	while(i < ary){
		printf("%d�Ԗڂ̗v�f�̒l����͂��Ă��������F",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
		i++;
	}
	return cnt;
}