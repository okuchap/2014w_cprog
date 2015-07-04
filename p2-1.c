#include <stdio.h>
#include <stdlib.h>

#define N 5

/*ベクトル領域の確保*/
/*a[i]~a[i+j]の領域を確保*/
double *dvector(int i,int j)
{

	double *a;
	
	if( (a = malloc( ((j-i+1)*sizeof(double))) ) == NULL )
	{
		printf("メモリが解放できません。(from dvector)\n");
		exit(1);
	}
	
	return(a-i);

}

/*領域の解放*/
void free_dvector(double *a, int i)
{

	free( (void *)(a + i) );   /*void *型へのキャストが必要*/

}



int main(void)
{

	double *a,*b;
	int i;
	
	printf("aの領域確保\n");
	a = dvector(1,N);
	for (i=1; i<=N; i++)
	{
		a[i] = (double)i/20.0;
		printf("a[%d]=%f \n",i,a[i]);
	}
	
	return 0;

}