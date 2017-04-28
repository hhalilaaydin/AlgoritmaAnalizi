#include<stdio.h> 
int Fibonacci(int); 
int fibo[6]={0,1,1,2,3,5};
int main()
{
   int n, i = 0, c; 
   printf("Fibonacci sayisi giriniz: ");
   scanf("%d",&n); 
   printf("Fibonacci series\n"); 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
   scanf("%d", i);
   return 0;
} 
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   if (n<=5){
      return fibo[n-1]+fibo[n-2];
   }
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
