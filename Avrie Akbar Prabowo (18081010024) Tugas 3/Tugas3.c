#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	struct mhs{
		char nama[30];
		char nim[11];
		float ipk;
	};
	
int main(){
	struct mhs m[5];
	printf("masukkan data mahasiswa\n");
	
	for(int i=0;i<5;i++){
		printf("\nMasukkan nama : ");
		gets(m[i].nama);
		printf("\nMasukkan npm : ");
		gets(m[i].nim);
		printf("\nMasukkan ipk : ");
		scanf("%f",&m[i].ipk);
		fflush(stdin);
	}
	for(int i=0;i<5;i++){
		printf("\nnama = %s ",m[i].nama);
		printf("\nnpm  = %s ",m[i].nim);
		printf("\nipk  = %f ",m[i].ipk);
	}
	printf("\n\nMahasiswa yang memiliki ipk >= 3.0\n");
	for(int i=0;i<5;i++){
		if(m[i].ipk >= 3.0){
			printf(m[i].nama);
			printf("\n");
		}
	}
	printf("\nMahasiswa yang memiliki ipk < 3.0\n");
	for(int i=0;i<5;i++){
		if(m[i].ipk < 3){
			printf(m[i].nama);
			printf("\n");
		}
	}
	return 0;
}
