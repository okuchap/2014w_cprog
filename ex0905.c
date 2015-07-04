#include <stdio.h>

#define N 10

int str_char(const char s[], int c)
{

	int i,j;
	for(i=0; ;i++){
	
		if(s[i] == 'c'){
			j = i+1;
			break;
			}
	
		if(s[i] == 0){
			j = -1;
			break;
			}
	
	}

	return j;

}

int main(void)
{

	char str[128];

	printf("文字列を入力：");
	scanf("%s",str);
	
	printf("cが含まれている添字は%dです。",str_char(str, 'c'));


return 0;

}