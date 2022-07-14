#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int count = 0;

int sortieren(int *von, int *bis)
{
    int cache_out = 0;
    int *ptr_out = NULL;
   
    if (von == bis)
    {
        return(0);
    }
       
    int cache = *von;
    int *ptr = von;

 
        while (ptr < bis)
        {
            if(cache > *ptr)
            {
                cache = *ptr;
                ptr_out = ptr;
            }
            ptr++;
        }
    
    
    if(*von != cache)
    {
        cache_out = *von;
        *von = cache;
        *ptr_out = cache_out;
        count++;
    }

    sortieren(++von, bis);
       
    
    return count;
}

int main(void)
{
     int alles[30] = {1, 7, 4, 3, 2, 9, 4};
     printf("result: %d\n", sortieren(&alles[1], &alles[5]));
 }
