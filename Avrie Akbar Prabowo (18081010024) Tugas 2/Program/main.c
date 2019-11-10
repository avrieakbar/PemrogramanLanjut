#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int pangkat(int a, int b){
	if(b == 1){
		return a;
	}
	else{
		return a * pangkat(a,(b-1));
	}
}

int main(int argc, char *argv[]) {
	int a,b;
	int bilangan = 1;
	int i = 0;
		
	printf("Masukkan Bilangan : ");
	scanf("%d",&a);
	printf("Masukkan Pangkat : ");
	scanf("%d",&b);
	
	printf("Rekursif : %d\n",pangkat(a,b));
	
	for(i=0;i<b;i++){
		bilangan = bilangan * a;
	}
	
	printf("Iterasi : %d\n",bilangan);
	
	return 0;
}
