#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    char arr[160];
    char Toni[160];
    char Thomke[160];
    scanf("%s", arr);
    while(i < 160)
    {
        if(isupper(arr[i]) == 1)
        {
            Toni[j] = arr[i];
            j++;
        }
        
        if(islower(arr[i]) == 1)
        {
            Thomke[k] = arr[i];
            k++;
        }
        i++;
    }
    printf("Nachricht an Toni: %s \n", Toni);
    printf("Nachricht an Thomke: %s", Thomke);
}
