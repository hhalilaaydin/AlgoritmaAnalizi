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
    int sonuc=1;
    if(b==0){
    sonuc=1;
            }
    else {
    int i;
    for(i=1;i<=b;i++){
    sonuc=sonuc*a;
    }
    }
    return sonuc; 
    }
