#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int dizi[]={4,-3,2,1,6,-1,-2,4};
    int boyut=8;
    int i,j;
    int enb=0,enbb=0;
    int toplam=0;
    for(i=0;i<(boyut/2);i++){
        printf("%d ",dizi[i]);
        toplam=toplam+dizi[i];                     
        if(enb<toplam){
               enb=toplam;           
             }
    }
    printf("\nIlk kisimda en buyuk Toplam: %d  ",enb);
    enbb=0;
    toplam=0;
    printf("\n",enb);
    for(i=4;i<boyut;i++){
        printf("%d ",dizi[i]);
        toplam=toplam+dizi[i];                     
        if(enbb<toplam){
               enbb=toplam;           
             }
    }
    printf("\nIkinci kisimda en buyuk toplam: %d  \n",enbb);  
    printf("Toplam %d:\n",enb+enbb); 
  system("PAUSE");	
  return 0;
}
