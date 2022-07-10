#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *substitute(const char *source, const char *target, const char *text)
{
    int i = 0;
    int j = 0;
    char *arrout;
    arrout = char *malloc( strlen(text) * sizeof(char) + 1);
    
    unsigned long length_text = strlen(text);
    unsigned long length_source = strlen(source);
    unsigned long length_target = strlen(target);
    
    if(length_source != length_target)
    {
        return NULL;
    }
    
    if(length_text > length_target)
    {
        return NULL;
    }
    
    
    
    while(i < int length_text)
    {
        while(j < length_source)
        {
            if(text[i] == source[j])
            {
                 arrout[i] = target[j];
            }
            j++;
        }
        i++;
    }
    
    return arrout;
}


