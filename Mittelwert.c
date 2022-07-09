#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int main(argc, char* argv[])
{
    float cache = 0;
    int i = 0;
    float result = 0;
    while(i < argc)
    {
        scanf("%f", &cache);
        result += cache
        i++;
    }
    result /= argc;
    printf("%f", result);
    return 0;
}
