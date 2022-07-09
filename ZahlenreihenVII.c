#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

long rekS(unsigned int k)
{
    if(k >= INT_MAX)
    {
        return -1;
    }
    if(k = 0)
    {
        return 0;
    }
    if(k = 1)
    {
        return 1;
    }
    if(k>=2)
    {
        int arr[k];
        int arr[0] = 0;
        int arr[1] = 1;
        int n = 0;
       
        while(n <= k)
        {
        if(k >= 1 && k == 2*n)
        {
            arr[k] = reks(n);
            n++;
        }
    
        if(k >= 1 && ( k == (2*n + 1) ) )
        {
        arr[k] = reks(n) + reks(n+1);
        n++;
        }
        else
        {
        n++;
        }
        }
    }
    return arr[k];
}
int main(void)
{
    printf("%d", reks(k));
    
}
