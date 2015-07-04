#include <stdio.h>

#define pr1 0.9 /* 二人とも正しいシグナルを受け取る確率 */
#define pr2 0.06 /* 二人とも間違ったシグナルを受け取る確率 */
#define pr3 0.02 /* 片方のみ間違ったシグナルを受け取る確率 */
#define CC 4 /* (C,C)のときの利得 */
#define CD 0 /* (C,D)のときの利得 */
#define DC 5 /* (D,C)のときの利得 */
#define DD 2 /* (D,D)のときの利得 */
#define NUMBER 10000 /* 回数の上限 */

void ex(int time)
{
	double p[NUMBER][4]; /* 各回のステートの確率 */
	double E = 0;
	double ex[NUMBER];
	int i;
	
	p[0][0]=1;
	p[0][1]=0;
	p[0][2]=0;
	p[0][3]=0;
	E = 4; /* 初回は必ず利得4を得る*/
	
	for(i=0; i<time; i++){

		p[i+1][0] = pr1*p[i][0] + pr2*p[i][1] + pr2*p[i][2] + pr1*p[i][3];
		p[i+1][1] = pr3*p[i][0] + pr3*p[i][1] + pr3*p[i][2] + pr3*p[i][3];
		p[i+1][2] = pr3*p[i][0] + pr3*p[i][1] + pr3*p[i][2] + pr3*p[i][3];
		p[i+1][3] = pr2*p[i][0] + pr1*p[i][1] + pr1*p[i][2] + pr2*p[i][3];
	
		E += CC*p[i+1][0] + CD*p[i+1][1] + DC*p[i+1][2] + DD*p[i+1][3];
	
	}

	printf("%d回後の期待利得は%fです。", time+1, E);

}



int main(void)
{

	int n;
	int finish;

	do{
	
		puts("期待利得を求めます。");
		printf("回数？");
		scanf("%d",&n);

		ex(n-1); /* n回後の期待利得を返す関数 */

		puts("終わりますか？【もう一回:1, 終わる:0】");
		scanf("%d",&finish);


		}while (finish != 0);

	return 0;

}