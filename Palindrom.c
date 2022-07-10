#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int palindrom(char* string, int laenge)
{
        //printf("strlen: %lu\nlaenge: %d\n", strlen(string), laenge);
    if(strlen(string) != laenge)
        return(1);
    int i = 0;
    printf("laenge: %d\n", laenge);
    char arr[laenge];
    arr[laenge] = '\0';
    while(i <= laenge)
    {
        printf("len(%d)-i(%d); %c\n",laenge, i, string[laenge-1-i]);
        arr[i] = string[laenge -1- i];
        i++;
    }
    printf("arr: %s\nstring: %s\n", arr, string);
    return strcmp(arr, string);
}

int main(void)
{
    char *string;
    int laenge;
    scanf("%s %d", string, &laenge);
    if(palindrom(string, laenge) == 0)
    {
        printf("palindrom");
    }
    else
        printf("kein palindrom");
}
