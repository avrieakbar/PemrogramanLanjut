#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[20]={4,7,3,12,16,8,9,11,20,23,14,1,6,22,26,25,12,29,21,19};
	int i,j;
	int k=0;
	
	for(i=0;i<20;i++){
		printf("================\n");
		printf("Array ke %d = %d\n",i+1,array[i]);
	}
	for(i=19;i>=0;i--){
		printf("Array ke %d = %d\n",i+1,array[i]);
	}
	printf("================\n");
	printf("masukkan angka yang ingin dicari : ");
	scanf("%d",&k);
	
	for(i=0;i<20;i++){
		if(j==array[i]){
			printf("angka %d ada didalam array\n",k);
			k=1;
			break;
		}
	}
	if(k!=1){
		printf("angka tidak ada");
	}
	return 0;
}
