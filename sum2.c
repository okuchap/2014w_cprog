#include <stdio.h>

int main(void)
{

	int a,b;
	double r;
	
	
	printf("整数a,bの値:");
	scanf("%d%d", &a, &b);
	
	printf("a+b=%d\n",a+b);
	
	printf("(a+b)/2 =%f\n\n", (double)(a+b)/2);
	
	printf("半径:");
	scanf("%lf", &r);
	
	printf("面積は%.3f", r*r*3.14);
	
	return 0;
	
}