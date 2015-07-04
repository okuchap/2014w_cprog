#include <stdio.h>
#include <limits.h>

int main(void)
{

	printf("この処理系のchar型は");

	if (CHAR_MIN)
		puts("signed");
	else
		puts("unsigned");

	

	printf("CHAR_BIT = %d",CHAR_BIT);

return 0;

}