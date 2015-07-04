#include <stdio.h>
int main(void)
{

	int length;
	int i,j;
	
	puts("右上直角三角形作るよ\n");
	
	printf("辺の長さ：");
	scanf("%d",&length);
	putchar('\n');
	
	for(i=1 ; i<(length+1) ;i++){
		for(j=1 ; j<=(i-1); j++)
			putchar(' ');
		for(j=1; j<=(length-i+1); j++)
			putchar('*');
		
			putchar('\n');
	}

return 0;

}