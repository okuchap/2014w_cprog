#include <stdio.h>

#define NUMBER 10
#define FAILED -1

int search_idx(const int v[], int idx[], int key, int n)
{

	int i=0;/* index for loop */;
	int j;
		
	for(j=0; j<n; j++){
		while(i<n){
			if (v[i] == key){
				break;
			}
			i++;
		}
		
		if (j==0 && i==n){
			break;
		}
		
		if (i==n)
			break;
		
	idx[j] = i;

	i++;

	}

	return (j==0) ? FAILED : j;


}




int main(void)
{

	int i, key, idx,k;
	int id[NUMBER],vx[NUMBER];
	
	for(i=0; i<NUMBER; i++){
		printf("vx[%d]の値は？",i);
		scanf("%d", &vx[i]);
	}
	
	printf("探す値は？");
	scanf("%d", &key);
	
	if ((idx = search_idx(vx, id, key, NUMBER)) == FAILED)
		puts("その数は配列内に存在しません。");
	else{
		printf("%dは配列内に%d個あります。", key, idx);
		for(k=0; k<idx; k++){
			printf("id[%d]=%d \n", k, id[k]);
		}
	}


return 0;

}