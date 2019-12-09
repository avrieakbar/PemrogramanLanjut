  #include<stdio.h>
  #include<conio.h>
  void selection (int a, int n[]){
  	int i, j, temp;
  	for(i=0;i<a;i++){
      for(j=i+1;j<a;j++){
         if(n[i]>n[j]){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }
   }
  }
void selection (int a, int n[]);
int main(){

   int i, j, a, temp;

   printf("Masukkan banyak angka: ");
   scanf("%d",&a);
	int n[a];
   printf("Masukkan %d angka: ", a);
 
   for(i=0;i<a;i++){
      scanf("%d",&n[i]);
  }
 
   printf("urutan angka: ");
   for(i=0;i<a;i++)
      printf(" %d",n[i]);

   return 0;
}
