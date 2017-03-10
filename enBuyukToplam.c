#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int dizi[]={4,-3,2,1,6,-1,-2,4};
    int boyut=8;
    int i,j;
    int enb=0;
    int toplam=0;
    for(i=0;i<(boyut/2);i++){
        toplam=toplam+dizi[i];                     
        if(enb<toplam){
               enb=toplam;           
             }
    }
    printf("Ilk kisimda en buyuk Toplam: %d  ",enb);
    enb=0;
    toplam=0;
    printf("\n",enb);
    for(i=4;i<boyut;i++){
        toplam=toplam+dizi[i];                     
        if(enb<toplam){
               enb=toplam;           
             }
    }
    printf("Ikinci kisimda en buyuk toplam: %d  \n",enb);   
  system("PAUSE");	
  return 0;
}
