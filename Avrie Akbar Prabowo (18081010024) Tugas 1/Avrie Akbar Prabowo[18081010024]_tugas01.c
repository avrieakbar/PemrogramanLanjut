#include <stdio.h>



int main() {
	char nama_mhs[35];
	char kota_asal_mhs[10];
	int umur;
	char fakultas[20];
	int semester;
	
	printf("Nama : ");
	scanf("%s",&nama_mhs);
	printf("Kota Asal : ");
	scanf("%s",&kota_asal_mhs);
	printf("Fakultas : ");
	scanf("%s",&fakultas);
	printf("Umur :");
	scanf("%d",&umur);
	printf("Semester :");
	scanf("%d",&semester);
	
	printf("\n\nbiodata : ");
	printf("\nnama : %s",nama_mhs);
	printf("\nkota asal : %s",kota_asal_mhs);
	printf("\numur : %d",umur);
	printf("\nfakultas : %s",fakultas);
	printf("\nsemester : %d",semester);
	
	
	
	
	
	
	
	return 0;
}
