/*作成者：1T(5) 小西 博之*/
/*課題名：課題07_1*/
#include<stdio.h>
#include<stdlib.h>

int inputValue(int*,int);

int main(void)
{
	int *p;
	int i = 0,ary,cnt;

	printf("配列の数を決めてください：");
	scanf("%d",&ary);

	p = (int*)malloc(sizeof(int) * ary);
	if(p == NULL){
		exit(EXIT_FAILURE);
	}

	cnt = inputValue(p,ary);

	printf("配列の値：");

	while(i < ary){
		printf("%d,",p[i]);
		i++;
	}
	printf("\n");

	printf("配列に入力された合計は%dです\n",cnt);

	free(p);

	return 0;
}

int inputValue(int *p,int ary)
{
	int i = 0,cnt = 0;

	while(i < ary){
		printf("%d番目の要素の値を入力してください：",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
		i++;
	}
	return cnt;
}