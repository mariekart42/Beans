#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <ctype.h>


char* string_filter(const char* text)
{
    int length = (int )strlen(text);
    char arr[length];
    arr[length] = '\0';
    int i = 0;
    int j = 0;

    while(i < length)
        {
        if( isupper(text[i]) == 1 )
            {
                arr[j] = text[i];
                j++;
            }
        
        if( islower(text[i]) == 1 )
            {
                arr[j] = text[i];
            }
                i++;
        }
    return arr;
    
}

int main()
{
    const char* text = ".D e inE M.uTteR.";
    printf("\n %s", string_filter(text));
}
