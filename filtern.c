#include <stdio.h>

char* string_filter(const char* text)
{
    int length = strlen(text);
    char arr[length];
    int i = 0;
    
    while(i < length)
    {
        if( isupper(text[i]) == 1 )
        {
            arr[i] = text[i];
        }
        
        if( islower(text[i]) == 1 )
        {
            arr[i] = text[i];
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
