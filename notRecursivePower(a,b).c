#include <stdio.h>
#include <stdlib.h>
void notRecursivePower(int,int,int);
int main(int argc, char *argv[])
{
    int a,b,c=0;
    printf("Tabani giriniz:");
    scanf("%d",&a);
    printf("Ussu giriniz:");
    scanf("%d",&b);
    printf("\n");
    notRecursivePower(a,b,c);
  
  system("PAUSE");	
  return 0;
}
void notRecursivePower(a,b,c){  // Karmasikligi O(n)'dir  
    int i,sonuc=1;
    if(a==0){
       printf("Sonuc: %d\n",a); 
       printf("Toplam carpma sayisi:%d\n",c);   
    }
    if(a==1){
       printf("Sonuc: 1\n");  
        printf("Toplam carpma sayisi:%d\n",c);   
    }
    if((a>1)&&(b>=1)){
    for(i=1;i<=b;i++){
      c++;
      sonuc=sonuc*a;
      printf("%d. Carpma sonucu: %d\n",c,sonuc);
      printf("Toplam carpma sayisi:%d\n",c); 
       }
    }
    if(b==0){
       printf("Sonuc: 1\n");  
        printf("Toplam carpma sayisi:%d\n",c);   
    }
    }
