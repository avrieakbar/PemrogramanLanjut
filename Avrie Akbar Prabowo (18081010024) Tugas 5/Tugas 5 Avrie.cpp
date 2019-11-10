#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct mahasiswa{
	char nama[30];
	float nilai[7];
};

typedef struct mahasiswa mahasiswa;

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	mahasiswa mhs[10];
	char matkul[7][25] = {"Pemrograman lanjut","Statistik komputasi","Metode numerik","Sistem operasi","KWU","Pancasila","Bela negara"};
	
	int i, j, loop = 0, menu, sum = 0;
	float ips;
	
	while(loop == 0) {
		system("cls");
		printf("1. Input mahasiswa\n");
		printf("2. Tampil nilai\n");
		printf("3. Keluar\n");
		printf("Input : ");
		scanf("%d", &menu);
		
		fflush(stdin);
		printf("\n");
		
		switch(menu){
			case 1:
				if (sum < 5) {
					printf("Masukkan nama mahasiswa : ");
					gets(mhs[sum].nama);
					for (i=0; i<7; i++) {
						mhs[sum].nilai[i] = rand() % 3 + 2;
					}
					sum++;
				} else {
					printf("Data telah mencapai batasnya\n");
					system("pause");
				}
				break;
			case 2:
				for (i=0; i<sum; i++) {
					ips = 0;
					printf("Nilai %s:\n", mhs[i].nama);
					for (j=0; j<7; j++) {
						printf("%s = %.2f\n", matkul[j], mhs[i].nilai[j]);
						ips = ips + (mhs[i].nilai[j] * 3);
					}
					ips = ips / 21;
					printf("IPS : %.2f\n", ips);
					printf("\n");
				}
				system("pause");
				break;
			case 3:
				loop = 1;
				printf("Terima kasih");
				break;
			default:
				printf("Inputan salah");
				break;
		}
	}
	return 0;
}
