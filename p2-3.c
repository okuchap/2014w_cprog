#include <stdio.h>
#include <stdlib.h>

#define L 3
#define M 2
#define N 3

/* 行列の積の計算 */
void matrix_product( double **a, double **b, double **c, int l1, int l2, int m1, int m2, int n1, int n2)
{
	
	int i,j,k;
	for(i=l1; i<=l2 ;i++){
		for(j=n1; j<=n2 ;j++){
			c[i][j]=0.0; /* 変数の初期化 */
			for(k=m1; k<=m2; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}