#include <stdio.h>

int main(void)
{
	int a,b,c,min;
	
	printf("整数a,b,c?:");
	scanf("%d%d%d", &a, &b, &c);
	
	min = a;
	
	if (min > b) min = b;
	if (min > c) min = c;
	
	printf("min = %d",min);



	return 0;

}