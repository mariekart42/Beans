#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

// int binary_conversion(int n, int count);

// int binary_len(int n);


int binary_len(int n)
{
    int count = 0;
    while(n >= 1)
    {
        n/= 10;
        count++;
    }
    return count;
}


int binary_conversion(int n)
{
    int count = binary_len(n);
    int arr[count];
    int i = 0;
    while(i <= count)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    int result = 0;
    int num = 1;
    for(int j = 0; j < count; j++)
    {
        result += arr[j] * num;
        num *= 2;   
    }
    return(result);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("main: %d", binary_conversion(n));
}