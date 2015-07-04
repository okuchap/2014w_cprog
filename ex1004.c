#include <stdio.h>

#define N 50

void set_idx(int *v, int n)
{
	int i;
	
	for(i=0; i<n; i++){
		v[i] = i;
	}




}


int main(void)
{
	int i,k;
	int a[N];
	
	printf("要素数を入力");
	scanf("%d", &k);
	
	set_idx(a, k);
	
	for(i=0; i<k; i++){
		printf("a[%d} = %d\n",i ,a[i]);
	}

return 0;

}