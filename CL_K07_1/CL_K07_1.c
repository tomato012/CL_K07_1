/*作成者：1T(5) 小西 博之*/
/*課題名：課題07_1*/
#include<stdio.h>

int inputValue(int*);

int main(void)
{
	int ary[3];
	int *p;
	int i,cnt;

	p = ary;

	cnt = inputValue(p);

	printf("配列の値：");

	for(i = 0; i < 2; i++){
		printf("%d,",p[i]);
	}
	printf("%d\n",p[i]);

	printf("配列に入力された合計は%dです\n",cnt);

	return 0;
}

int inputValue(int *p)
{
	int i,cnt = 0;

	for(i = 0; i < 3; i++){
		printf("%d番目の要素の値を入力してください：",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
	}
	return cnt;
}