#include <stdio.h>
int main(void)
{

	int a,b;

	do{
		printf("正の整数を入力:");
		scanf("%d",&a);

		if (a<=0)
			printf("\a正の整数以外はダメです\n");

	}while(a<=0);

	putchar('\n');

	b=a;

	printf("%dを逆から読むと",b);

	while(a>0){

	printf("%d",a%10);
	
	a /= 10;

	}

	puts("です。");

return 0;

}