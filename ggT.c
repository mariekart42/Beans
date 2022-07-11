#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

unsigned long ggT(unsigned long a, unsigned long b) 
{
    if (b == 0) 
        return (a);
    return (ggT(b, a % b));
}
