#include <stdio.h>
int main(void)
{

	int a,b,height,length;
	int i,j;
	
	puts("長方形作るよ\n");
	
	printf("辺その1：");
	scanf("%d",&a);
	putchar('\n');
	
	printf("辺その2：");
	scanf("%d",&b);
	putchar('\n');
	
	if (a>=b){
		length = a;
		height = b;
	}
	else{
		length = b;
		height = a;
	}
		
	for(i=0; i<height ;i++){
		for(j=0; j<length; j++){
		printf("*");}
		putchar('\n');
	}

return 0;

}