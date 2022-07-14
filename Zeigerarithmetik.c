#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int sortieren (int *von, int *bis)
{
    if(von != bis)
    {
        int count = 0;
        int compare = *von;
        int *ptr = von;
    
        while(ptr != bis)
        {
            if(compare < *ptr)
            {
                compare = *ptr;
                count++;
            }
                ptr++;
        }
    
    if(*von != compare)
    {
        *von = compare;
        count++;
    }
    
        if(ptr != bis)
        {
            sortieren(von++, bis);
        }

    return count;
    }
}


