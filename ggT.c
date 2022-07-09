#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

unsigned long ggT (unsigned long a, unsigned long b)
{
    if( (a % b) > 0 && a > b )
    {
        return ggT(b, a % b );
    }
    
    if( (b % a) > 0 && b > a )
    {
        return ggT(a, b % a );
    }
    
    if( a % b == 0 && b < a)
    {
        return b;
    }
    if(a % b == 0 && b > a)
    {
        return a;
    }
    if( b % a == 0 && b < a)
    {
        return b;
    }
    else if(b % a == 0 && b > a)
    {
        return a;
    }
    
    if( b == 0 )
    {
        return a;
    }
    
    if( a == 0 )
    {
        return b;
    }

    return ggT(a,b);
}
