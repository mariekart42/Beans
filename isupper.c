#include <stdio.h>
#include <ctype.h>

int main()
{
     char grr = 'X';
     char rr = ';';

     char arr[6];

     arr[0] = 'p';
     arr[1] = 'G';
     arr[2] = 'z';
     arr[3] = '+';
     arr[4] = '?';
     arr[5] = '\0';
     
     printf("isupper(%c): %d\n", grr, isupper(grr));
     printf("isupper(%c): %d\n", rr, isupper(rr));
     printf("isupper(%c): %d\n", arr[1], isupper(arr[1]));
     printf("isupper(%c): %d\n", arr[4], isupper(arr[4]));
}