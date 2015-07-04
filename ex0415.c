#include <stdio.h>
int main(void)
{

	int from,to,grid;
	int a,b;

	printf("何cmから");
	scanf("%d",&from);
	putchar('\n');

	printf("何cmまで");
	scanf("%d",&to);
	putchar('\n');
	
	printf("何cmごと");
	scanf("%d",&grid);
	putchar('\n');
	
	
	for(; from <= to ; from+=grid){
	
	printf("%d cm %.2f kg\n",from,(double)(from-100)*0.9);
	
	}
	
	return 0;

}