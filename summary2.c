#include <stdio.h>

int main(void)
{

	int a,b;
	double r;
	
	
	printf("����a,b�̒l:");
	scanf("%d%d", &a, &b);
	
	printf("a+b=%d\n",a+b);
	
	printf("(a+b)/2 =%f\n\n", (double)(a+b)/2);
	
	printf("���a:");
	scanf("%lf", &r);
	
	printf("�ʐς�%.3f", r*r*3.14);
	
	return 0;
	
}