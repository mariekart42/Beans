#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i = 1;
    double result;
    while (i < argc)
    {
        result += atof(argv[i]);
        i++;
    }
    printf("%f\n", result/(argc-1));
}
