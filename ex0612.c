/* m*n行列とn*m行列の積を求める */
#include <stdio.h>

#define M 2
#define N 2


/* 積計算を行う関数 */
void mat_mul(const int a[M][N], const int b[N][M], int c[M][M])
{
	int i,j,k;

	for(i=0; i<M; i++){
		for(k=0; k<M; k++){
			for(j=0; j<N; j++){
				c[i][k] += a[i][j]*b[j][i];
			}
		}
	}

}

/* 計算結果の表示を行う関数*/

void mat_print(int c[M][M])
{

	int i,j;
	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			printf("%4d",c[i][j]);
		}
		putchar('\n');
	}
}






int main(void)
{

	int i,j;
	int ax[M][N], bx[N][M], cx[M][M];

	puts("行列の積を求めます。");

	/* 計算する行列の入力 */
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("a[%d][%d]の値は？",i,j);
			scanf("%d",&ax[i][j]);
		}
	}

	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("b[%d][%d]の値は？",i,j);
			scanf("%d",&bx[i][j]);
		}
	}

	/* 行列の積の計算 */
	mat_mul(ax, bx, cx);
	
	/* 計算結果の表示 */
	mat_print(cx);
	

return 0;

}