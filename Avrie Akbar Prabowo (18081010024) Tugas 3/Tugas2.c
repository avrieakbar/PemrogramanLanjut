#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mhs{
	int npm;
	float ipk;
};typedef struct mhs mhs;

int main(){
	float ipk[10]={2.89, 3.42, 3.12, 3.62, 3.11, 3.55, 2.67, 4.0, 3.81, 3.91};
	int npm[10]={1,21,11,23,25,12,13,14,20,10};
	
	for(int i=0;i<10;i++){
		printf("\nNPM : %d\n",npm[i]);
		printf("IPK : %f\n",ipk[i]);
	}
	printf("===================\n");
	
	mhs upn[10];
	
	for(int i=0;i<10;i++){
		printf("\nMasukkan NPM : ");
		scanf("%f",&upn[i].npm);
		printf("\nMasukkan IPK : ");
		scanf("%d",&upn[i].ipk);
	}
	for(int i=0;i<10;i++){
		printf("\nMahasiswa dengan NPM %d memiliki IPK %f\n",upn[i].npm,upn[i].ipk);
	} 
	return 0;
}
