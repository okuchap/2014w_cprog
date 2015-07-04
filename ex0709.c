#include <stdio.h>
#include <math.h>


int main(void)
{

	double x1;

	printf("正方形の面積を入力");
	scanf("%lf",&x1);
	
	printf("正方形の面積は%f\n",x1);
	printf("正方形の一辺の長さは%f",sqrt(x1));

	return 0;

}