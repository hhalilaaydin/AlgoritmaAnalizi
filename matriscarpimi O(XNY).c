#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
  int matris1[3][3]={{3,4,5},{4,5,6},{7,8,9}};
  int matris2[3][3]={{3,4,5},{4,5,6},{7,8,9}};
  int matris3[3][3]={0};
  int i,j,k,satir=3,sutun=3;
  int islemsayisi=0;
  for (i =0; i<satir; i++)     
	{ 
    	for (j = 0; j < sutun; j++) 
		{       		  
    		for (k = 0; k < sutun; k++) {           
            islemsayisi++;
        	matris3[i][j] += matris1[i][k] * matris2[k][j];  
   		 }
      }
    } 
  printf("Sonuc matrisi: \n"); 
  for (i = 0; i < satir; i++) 
	{            
    	for (k = 0; k < sutun; k++) {    	
        printf ("\t%d",matris3[i][k]); 
        }     
        printf ("\n");                
    }
  printf("Islem sayisi: %d \n Yani karmasikligimiz \n(matris1'in satir sayisi)*\n(matris2'nin sutun sayisi)*\n(matris1 ve matris2nin ortak olan satir ve sutun sayisi ) " , islemsayisi);
  system("PAUSE");	
  return 0;
}
