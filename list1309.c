#include <stdio.h>

int main(void)
{

	FILE *fp;
	double pi = 3.14159265358979323846;
	
	printf("変数piから取り出した円周率は%23.21f\n", pi);
	
	
	if((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\a オープン不可\n");
	else{
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}
	
	
	if((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\a オープン不可\n");
	else{
		fread(&pi, sizeof(double), 1, fp);
		printf("ファイルから読み取ったpiは%23.21f\n", pi);
		fclose(fp);
	}

	return 0;

}