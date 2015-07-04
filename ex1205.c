#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))

typedef struct {
	double x;
	double y:
} Point;
	
typedef struct {
	Point pt;
	double fuel;
} Car;

double distance_of(Point pa, Point pb){
	return sqrt( sqr(pa.x - pb.x) + sqr(pa.y - pb.y) );
}

void put_info(Car c){
	printf("現在位置:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料:%.2fリットル\n",c.fuel);
}

/*　目的座標を指定して移動　*/
int move1(Car *c, Point dest){
	double d = distance_of(c->pt, dest);
	
	if(d > c->fuel) return 0;
	else {c->pt = dest;  c->fuel -= d;  return 1;}
	
}


/* 移動距離を指定して移動 */
int move2(Car *c, double dx, double dy){
	double d = sqrt(sqr(dx)+sqr(dy)); /* 移動距離 */
	if(d > c->fuel) return 0;
	else{(*c).pt.x += dx; (*c).pt.y += dy;
	return 1;}
}


int main(void){
	
	Car mycar = {{0.0, 0.0}, 100.0};

	while(1){
		int select1;
		int select2;
		double xx,yy;
		Point dest;
		put_info(mycar);
		
		printf("移動しますか？[Yes:1, No:0]\n");
		scanf("%d", select1);
		
		if(select != 1) break;
		
		printf("どの方法で移動しますか？[座標指定:0, 移動距離;1]　\n")
		scanf("%d", select2);
		
		if(select2 == 0){
			printf("目的地のx座標は？:");
			scanf("%lf", dest.x);
			printf("目的地のy座標は？");
			scanf("%lf", dest.y);
			
			if(!move1(&mycar, dest)) puts("\a　燃料不足で移動不可");
		}
		
		if(select2 == 1){
			printf("x方向の移動距離は？:");
			scanf("%lf", xx);
			printf("y方向の移動距離は？:");
			scanf("lf", yy);
			
			if(!move2(&mycar, xx, yy)) puts("\a燃料不足で移動不可");
		}
		
		
	}
	
	return 0;
	
}