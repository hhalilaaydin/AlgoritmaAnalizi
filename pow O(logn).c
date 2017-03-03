#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z= pow(3,3);
    printf("%d",z);
    return 0;
}
int pow(int x,int n){
    if (n==0)
        return 1;
    else if (x==1)
        return 1;
    else if (even(n)==1){
        n=n/2;
        x=x*x;
        return pow(x,n);
        }
    else if (even(n)==0){
        n=n/2;
        x=x*x;
        return pow(x,n)*x;
        }
}
int even(int y){
    if ((y%2)==0) return 1;
    else return 0;
}
