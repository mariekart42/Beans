#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strcmp_A_a(char *str, char *arr)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if(str[i] == arr[i])
            count++;
        else if(str[i] >= 65 && str[i] <= 90)
        {
            if(arr[i] - 32 == str[i])
                count++;
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            if(arr[i] + 32 == str[i])
                count++;
        }
        i++;
    }
    if(count == (int)strlen(str))
        return (0);
    else
        return (1);
}

int palindrom(char* string, int laenge)
{
    if((int)strlen(string) != laenge)
        return(1);
    int i = 0;
    char arr[laenge];
    arr[laenge] = '\0';
    while(i <= laenge)
    {
        printf("len(%d)-i(%d); %c\n",laenge, i, string[laenge-1-i]);
        arr[i] = string[laenge - 1 - i];
        i++;
    }
    printf("arr: %s\nstring: %s\n", arr, string);

    return strcmp_A_a(string, arr);
}

int main(void)
{
    char string[1024];
    int laenge;
    scanf("%1023s %d", string, &laenge);
    if(palindrom(string, laenge) == 0)
    {
        printf("palindrom");
    }
    else
        printf("kein palindrom");
}

