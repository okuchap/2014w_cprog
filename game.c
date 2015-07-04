#include <stdio.h>

#define pr1 0.9 /*　二人とも正しいシグナルを受け取る確率　*/
#define pr2 0.06　/*　二人とも間違ったシグナルを受け取る確率　*/
#define pr3 0.02　/*　片方のみ間違ったシグナルを受け取る確率　*/
#define CC 4　/*　(C,C)のときの利得　*/
#define CD 0　/*　(C,D)のときの利得　*/
#define DC 5　/*　(D,C)のときの利得　*/
#define DD 2　/*　(D,D)のときの利得　*/


void ex(time)
{
double pr_at =1, pr_bt = 0 ,pr_ct = 0 ,pr_dt = 0;
double ex;
double pr_At,pr_Bt,pr_Ct,pr_Dt;
int i;

for(i=0; i<time; i++){
	
pr_At = pr_at;
pr_Bt = pr_bt;
pr_Ct = pr_ct;
pr_Dt = pr_dt;

pr_at = pr1*pr_At + pr2*pr_Bt + pr2*pr_Ct + pr2*pr_Dt;
pr_bt = pr3*pr_At + pr3*pr_Bt + pr3*pr_Ct + pr3*pr_Dt;
pr_ct = pr3*pr_At + pr3*pr_Bt + pr3*pr_Ct + pr3*pr_Dt;
pr_dt = pr2*pr_At + pr1*pr_Bt + pr1*pr_Ct + pr2*pr_Dt;

}

ex = CC*pr_at + CD*pr_bt + DC*pr_ct + DD*pr_dt;

printf("%d回後の期待利得は%fです。", time, ex);

}



int main(void)
{

int n;
int finish;

do{

put("期待利得を求めます。");
printf("回数？");
scanf("%d",&n);

int ex(n); /* n回後の期待利得を返す関数 */

put("終わりますか？【もう一回:1, 終わる:0】");
scanf("%d",&finish);


}(while finish != 0)

return 0;

}