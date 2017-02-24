#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("PAUSE");	
  return 0;
}
int FindMaxSubSum3(int x[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
        x[i] = sum;//sum of x[0...i] is stored to x[i]
    }

    int maxSubSum = 0x80000000;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j< n; j++)
        {
            sum = x[j] - x[i];
            if (sum > maxSubSum)
            {
                maxSubSum = sum;
            }
        }
    }
    return maxSubSum;
}

