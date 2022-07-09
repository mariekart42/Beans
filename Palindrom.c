#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int reverse(char* string, int laenge)
{
    int i = 0;
    char arr[11];
    arr[10] = '\0';
    while(i <= laenge)
    {
        arr[i] = string[laenge - i];
        i++;
    }
    puts(arr);
    return strcmp(arr, string);
}

int main(void)
{
    char string[10] = "lagerregal";
    int laenge = 9;
   // scanf("%s %d", string, &laenge);
    if(reverse(string, laenge) == 0)
    {
        printf("palindrom");
    }
    else
        printf("kein palindrom");
}
