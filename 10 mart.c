#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int dizi[]={4,-3,2,1,6,-1,-2,4};
    int boyut=8;
    int i,j;
    for(i=0;i<(boyut/2);i++){
        printf("%d  ",dizi[i]);
    }
        printf("\n");
    for(j=4;j<boyut;j++){
        printf("%d  ",dizi[j]);
    }
    
  system("PAUSE");	
  return 0;
}
