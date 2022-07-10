#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// int main(int argc, char *argv[])
// {
//     int i = 1;
//     double result;
//     while (i < argc)
//     {
//         result += atof(argv[i]);
//         i++;
//     }
//     printf("%f\n", result/(argc-1));
// }


// int main()
// {
//     //int i = 0;
//     double n = 0;
//     while(n >= 0 && n <= 9)
//     {
//         scanf("%lf", &n);
//         printf("n: %lf\n", n);
//     }
// }

char *inputString(FILE* fp, size_t size)
{
//The size is extended by the input with the value of the provisional
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str)*size);//size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n')
    {
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(*str)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(*str)*len);
}

int main(void){
    char *m;

    m = inputString(stdin, 10);
    // printf("%s\n", m);

    int i = 0;
    double result = 0.0;
    while (i < (int)strlen(m))
    {
        result += atof(&m[i]);
        i++;
    }
    printf("%f\n", result/strlen(m));

    free(m);
    return 0;
}