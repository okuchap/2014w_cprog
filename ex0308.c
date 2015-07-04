#include <stdio.h>

int main(void)
{
	int a,b,c,min;
	
	printf("整数a,b,c?:");
	scanf("%d%d%d", &a, &b, &c);
	
	min = a;
	
	min = (min>b) ? b : min;
	min = (min>c) ? c : min;
	
	printf("min = %d",min);



	return 0;

}