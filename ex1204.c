#include <stdio.h>
#include <string.h>

#defiCne NUMBER 3
#define NAMELEN 12

typedef struct student{
	char name[NAMELEN];
	int height;
	
}Student;

void swap_Student(Student *x, Student *y){
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n){

	int i,j;
	
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if(a[j-1].height > a[j].height){
				swap_Student(&a[j-1], &a[j]);
			}
		}
	}
}



void sort_by_name(Student a[], int n){
	int i,j;
	
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if(a[j-1].name > a[j].name){ /* 配列のソートよくわからん */
				swap_Student(&a[j-1], &a[j]);
			}
		}
	}
	
}


int main(void){
	
	int i,selected;
	Student std[NUMBER];
	
	puts("生徒の名前と身長を入力。");
	
	for(i=0; i<NUMBER; i++){
		printf("%d人目の名前は？", i+1);
		scanf("%s", std[i].name);
		
		printf("%d人目の身長は？", i+1);
		scanf("%d", &std[i].height);
	}
	
	for(i=0; i<NUMBER; i++){
		printf("名前: %s　身長: %d \n", std[i].name, std[i].height);
	}
	
	printf("身長と名前どちらでソートしますか？(身長:0 名前:1): ");
	scanf("%d", &selected);
	
	if(selected == 0) sort_by_height(std, NUMBER);
	else sort_by_name(std, NUMBER);
	
		for(i=0; i<NUMBER; i++){
		printf("名前: %s　身長: %d \n", std[i].name, std[i].height);
	}
	
	
	
	return 0;
	
}