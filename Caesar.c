#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int move = 0;
    char arr[100];
    char c;

    while( (c = getchar()) != '\n')
    {
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    
    scanf("%d", &move);
    
    while(j < i)
    {
        if(arr[j] >= 65 && arr[j] <= 90)
        {
            if(arr[j] + move > 90)
                arr[j] = 65 + (move + (arr[j] - 91)) % 26;
            else    
                arr[j] = arr[j] + move;
        }
        if(arr[j] >= 97 && arr[j] <= 122)
        {
            if (arr[j] + move > 122)
                arr[j] = 97 + (move + (arr[j] - 123)) % 26;
            else
                arr[j] = move + arr[j];
        }
        j++;
    }
    arr[j] = '\0';
    puts(arr);
}

