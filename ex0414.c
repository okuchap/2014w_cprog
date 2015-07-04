#include <stdio.h>
int main(void)

{

	int no;
	int i=1;

	printf("正の整数を入力\n");
	scanf("%d",&no);

	while(no>0){

	printf("%d",i%10);
	i++;
	no--;

	}


return 0;

}