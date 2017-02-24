#include <stdio.h>
#include <stdlib.h>
int power (int a,int b);
int main(int argc, char *argv[])
{
    int a, b,c;
     printf("A gir:");
     scanf("%d",&a);
     printf("B gir:");
     scanf("%d",&b);
     c=power(a,b);
     printf("power(A,B)= %d\n",c);
  system("PAUSE");	
  return 0;
}
int power(int a,int b){
    int sonuc=1;        //1
    if(b==0){           //1
    sonuc=1;
            }
    else {
    int i;              //1
    for(i=1;i<=b;i++){  //N-1
    sonuc=sonuc*a;      //N-1
    }                      //2N+1=O(N) 
    }
    return sonuc; 
    }
