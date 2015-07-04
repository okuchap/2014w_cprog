#include <stdio.h>
int main(void)
{

	int height;
	int i,j;
	
	puts("ピラミッド作るよ\n");
	
	printf("段数：");
	scanf("%d",&height);
	putchar('\n');
	
	for(i=1 ; i<=height ;i++){
		for(j=1 ; j<=(height-i); j++)
			putchar(' ');
		for(j=1; j<=((i-1)*2+1); j++)
			putchar('*');
		
			putchar('\n');
	}

return 0;

}