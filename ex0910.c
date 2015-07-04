#include <stdio.h>

void del_digit(char s[])
{
	int i,j;
	
	for(i=0; i!=0 ;i++){
		if(s[i]>='0' && s[i]<='9'){
			for(j=i; j!=0 ;j++){
				s[j] = s[j+1];
			}
		}
	}

}

int main(void)
{

	char str[128];
	
	printf("文字列を入力：");
	scanf("%s", str);
	
	printf("削除前の文字列は%s\n", str);
	
	del_digit(str);
	
	printf("削除後の文字列は%s\n", str);

	return 0;

}