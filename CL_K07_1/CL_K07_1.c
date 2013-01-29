/*作成者：1T(5) 小西 博之*/
/*課題名：課題07_1*/
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

	printf("配列の値：");

	while(i < 4){
		printf("%d,",p[i]);
		i++;
	}
	printf("%d\n",p[i]);

	printf("配列に入力された合計は%dです\n",cnt);

	return 0;
}

int inputValue(int *p)
{
	int i = 0,cnt = 0;

	while(i < 5){
		printf("%d番目の要素の値を入力してください：",i+1);
		scanf("%d",&p[i]);
		cnt += p[i];
		i++;
	}
	return cnt;
}