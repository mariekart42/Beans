#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int binary_conversion(int n, int count);

int binary_len(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", binary_conversion(n,binary_len));git 
}

int binary_len(int n)
{
    int count = 0;
    while(n >= 1)
    {
        n/= 10;
        count++;
    }
    printf("%d", count);
    return count;
}


int binary_conversion(int n, int count)
{
    int arr[count];
    int i = 0;
    while(i<=count)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;;
    }
    int result;
    
    for(int j = 0; j <= count; j++)
    {
        result += arr[j] * pow(2,j);
        j++;
    }
    
}
