#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct bank{
	int norek;
	char bank[15];
	char nama[40];
	long saldo;
	
	struct ttl{
		int tgl;
		int bln;
		int tahun;
	}tl;
	
	struct alamat{
		char jln[30];
		char kota[15];
		char provinsi[15];
	}al;
}akun[100];

int main(){
	int pil,b,ulang=1,i=0,total=0;
	
	while(ulang==1){
	printf("============== Selamat Datang di Data Bank ==============");
	printf("\n1. Input Data                                            ");
	printf("\n2. Read Data			                                   ");
	printf("\n3. Tampilkan Jumlah Saldo Total                          ");
	printf("\n4. Cari Data Sesuai Dengan Kota/Prov                     ");
	printf("\n5. Cari Data Sesuai Dengan Umur                          ");
	printf("\n6. Cari Data Sesuai Dengan No Rekening                   ");
	printf("\n7. Tampilkan Data Dengan Saldo Terbanyak Dan Tersedikit  ");
	printf("\n8. Exit                                                  ");
	printf("\n=========================================================");
	printf("\nMasukkan Pilihan Anda : ");
	scanf("%d",&pil);
	system("cls");
	
	switch(pil){
		case 1:
		{
		system("cls");
			printf("========== Selamat Datang ==========");
			fflush(stdin);
			printf("\nMasukkan Nama Bank         : ");
			gets(akun[i].bank);
			printf("\nMasukkan No Rekening       : ");
			scanf("%d",&akun[i].norek);
			fflush(stdin);
			printf("\nMasukkan Nama Nasabah      : ");
			gets(akun[i].nama);
			printf("\nMasukkan TTL (dd-mm-yyyy)  : ");
			scanf("%d-%d-%d",&akun[i].tl.tgl,&akun[i].tl.bln,&akun[i].tl.tahun);
			fflush(stdin);
			printf("\nMasukkan Alamat Jalan		 : ");
			gets(akun[i].al.jln);
			printf("\nMasukkan Alamat Kota 		 : ");
			gets(akun[i].al.kota);
			printf("\nMasukkan Alamat Provinsi 	 : ");
			gets(akun[i].al.provinsi);
			printf("\nMasukkan Saldo Anda        : ");
			scanf("%d", &akun[i].saldo);
			fflush(stdin);
			i++;
			printf("\n==========================================");
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			if(i!=0){
				printf("============= Data Nasabah =============");
				for(b=0;b<i;b++){
					printf("\n\n Nasabah ke-%d",b+1);
					printf("\n------------------------------------------");
					printf("\n| Bank         : %s",akun[b].bank);
					printf("\n| No Rekening  : %d",akun[b].norek);
					printf("\n| Nama         : %s",akun[b].nama);
					printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n| Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
			}
			else{
				printf("============= NULL ! =============");
			}getch();
			system("cls");
			break;
		}	
		case 3:
			for(b=0;b<i;b++){
				total+=akun[b].saldo;
			}		
			printf("--------------------------------------");
			printf("\nTotal Nasabah : %d",i);
			printf("\nTotal Saldo   : %d",total);
			printf("\n--------------------------------------");
			getch();
			system("cls");
			break;	
			
		case 4:
			{
			char lokasi[15];
			int ada=0;
			printf("---------------------------------------------------------------");
			fflush(stdin);
			printf("\nMasukkan Nama Kota/Provinsi : ");
			gets(lokasi);
			printf("\n---------------------------------------------------------------");
			for(b=0;b<i;b++){
				if(strcmp(akun[b].al.kota,lokasi)==0){
					ada++;
			        printf("\n\n Nasabah yg tinggal di kota %s",lokasi);
					printf("\n------------------------------------------");
					printf("\n Bank         : %s",akun[b].bank);
					printf("\n No Rekening  : %d",akun[b].norek);
					printf("\n Nama         : %s",akun[b].nama);
					printf("\n TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
				if(strcmp(akun[b].al.provinsi,lokasi)==0){
					ada++;
			        printf("\n\nNasabah yg tinggal di provinsi %s",lokasi);
					printf("\n------------------------------------------");
					printf("\nBank         : %s",akun[b].bank);
					printf("\nNo Rekening  : %d",akun[b].norek);
					printf("\nNama         : %s",akun[b].nama);
					printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\nSaldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
			}
			if(ada==0){
				printf("============= NULL ! =============");
			}getch();
			system("cls");
			break;
		}
		case 5 :
		{
			int umur1,umur2,tahun1,tahun2;
			int ada1=0,ada2=0;
			printf("\n------------------------------------------------------------");
    		fflush(stdin);
			printf("\n Masukkan batas awal umur : ");
    		scanf("%d",&umur1);
    		fflush(stdin);
			printf("\n Masukkan batas akhir umur : ");
    		scanf("%d",&umur2);
			printf("\n------------------------------------------------------------");
			tahun1 = 2019-umur1;
			tahun2 = 2019-umur2;
			for(b=0;b<i;b++){
				if(akun[b].tl.tahun > tahun1){
					ada1++;
					printf("\n\n------------------------------------------------------------");
	    			printf("\nNasabah yang umurnya kurang dari %d tahun",umur1);			
					printf("\n------------------------------------------------------------");
					printf("\nBank         : %s",akun[b].bank);
					printf("\nNo Rekening  : %d",akun[b].norek);
					printf("\nNama         : %s",akun[b].nama);
					printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\nSaldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------------------------");
				}	
			}
			if(ada1==0){
				printf("\n====== Not Found ! ======",umur1);
	    	}
			for(b=0;b<i;b++){
				if(akun[b].tl.tahun > tahun1){
				ada2++;
				printf("\n\n------------------------------------------------------------");
	    		printf("\nNasabah yang umurnya lebih dari %d tahun",umur2);			
				printf("\n------------------------------------------------------------");
				printf("\nBank         : %s",akun[b].bank);
				printf("\nNo Rekening  : %d",akun[b].norek);
				printf("\nNama         : %s",akun[b].nama);
				printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
				printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
				printf("\nSaldo        : %d",akun[b].saldo);
				printf("\n------------------------------------------------------------");
	    		}
			}
			if(ada2==0){
			printf("\n====== Not Found ! ======",umur2);
				}
				getch();
				system("cls");
				break;	
		}
		case 6:
		{
			int norekening,temu=0;
			printf("------------------------------------------------------------");
    		fflush(stdin);
			printf("\n Masukkan No rekening : ");
    		scanf("%d",&norekening);
			printf("\n------------------------------------------------------------");
			for(b=0;b<i;b++){
			if(akun[b].norek==norekening){
				temu++;
				printf("\n\n------------------------------------------------------------");
				printf("\nBank         : %s",akun[b].bank);
				printf("\nNo Rekening  : %d",akun[b].norek);
				printf("\nNama         : %s",akun[b].nama);
				printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
				printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
				printf("\nSaldo        : %d",akun[b].saldo);
	        	printf("\n------------------------------------------------------------");
				}
			}
			if(temu==0){
				printf("\n====== Not Found ! ======");
				}
			getch();
    		system("cls");
    		break;
    	}
    	
    	case 7:
    	{
    		float min = akun[0].saldo, max = akun[0].saldo;
			int b, ketemu = 0;
			for(b=0;b<i;b++){
				if(max < akun[b].saldo){
				max = akun[b].saldo;
				}
				else{
					max = max;
				}		
			}
			for(b=0;b<i;b++){
				if(min > akun[b].saldo){
				min = akun[b].saldo;
			}
			else{
			min = min;
				}	
			}
			for(b=0;b<i;b++){
			if(akun[b].saldo == min){
			ketemu++;
			printf("\n\n------------------------------------------------------------");
	    	printf("\nNasabah saldo minimal");			
			printf("\n\n------------------------------------------------------------");
			printf("\nBank         : %s",akun[b].bank);
			printf("\nNo Rekening  : %d",akun[b].norek);
			printf("\nNama         : %s",akun[b].nama);
			printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
			printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
			printf("\nSaldo        : %d",akun[b].saldo);
	        printf("\n------------------------------------------------------------");
			}
			if(akun[b].saldo == max){
			ketemu++;
			printf("\n\n------------------------------------------------------------");
	    	printf("\nNasabah saldo maksimal");			
			printf("\n\n------------------------------------------------------------");
			printf("\nBank         : %s",akun[b].bank);
			printf("\nNo Rekening  : %d",akun[b].norek);
			printf("\nNama         : %s",akun[b].nama);
			printf("\nTTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
			printf("\nAlamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
			printf("\nSaldo        : %d",akun[b].saldo);
	        printf("\n------------------------------------------------------------");
	    		}	
			}
			if(ketemu==0){
			printf("\n====== Not Found ! ======");
	    	}
			getch();
			system("cls");
			break;
		}
		
		case 8:
			printf("====== Terima Kasih ======");
			ulang=0;
		}
	}
		
	return 0;
}
