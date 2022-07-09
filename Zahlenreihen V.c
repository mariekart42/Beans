#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int sequence(int x, int n)
{
    int arr[n];
    if(x>=INT_MAX)
    {
        return -1;
    }
    if(n<0)
    {
        return 0;
    }

    if(n==0)
    {
        return x;
    }
    int i = 1;
    arr[0] = x;
    while(i <= n)
    {
        if(arr[i-1]%2 != 0)
        {
        arr[i] = 3 * arr[i-1] + 1;
   //     printf("%d \n", arr[i]);
        i++;
        }
        if(arr[i-1]%2 == 0 && i <= n)
        {
        arr[i] = arr[i-1]/2;
     //   printf("%d \n", arr[i]);
        i++;
        }
    }
    return arr[n];
}
/*
int main(int argc, char *argv[])
    {
  printf("%d \n", sequence(45, 20));
  return 0;
    } */

