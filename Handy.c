#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //int i = 0;
    int j = 0;
    int k = 0;
    char Toni[160];
    char Thomke[160];
    char x = 'x';

    while(!(x == '\n' || x == '\0') && (j + k < 160))
    {
        x = getchar();
        if(isupper(x) == 1)
        {
            Toni[j] = x;
            j++;
        }
        if(islower(x) == 1)
        {
            Thomke[k] = x;
            k++;
        }
        //i++;
    }
    
    Toni[j] = '\0';
    Thomke[k] = '\0';
    printf("Nachricht an Toni: %s\n", Toni);
    printf("Nachricht an Thomke: %s\n", Thomke);
}
