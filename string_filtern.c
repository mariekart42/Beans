#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int calc_len(const char *str)
{
     int count = 0;
     int i = 0;
     while(str[i] != '\0')
     {
          if(isupper(str[i]) == 1 || islower(str[i]) == 1)
               count++;
          i++;
     }
     return(count);
}

char* string_filter(const char* text)
{
     int k = 0;
     int i = 0;
     int len = calc_len(text);
     char *str;
     str =(char *)calloc(len+1, sizeof(char));
     while(text[i] != '\0')
     {
          if(isupper(text[i]) == 1 || islower(text[i]) == 1)
          {
               str[k] = text[i];
               k++;
          }
          i++;
     }
     str[k] = '\0';
     return(str);
}

int main(void)
{
     printf("filtered: %s\n", string_filter("bla bums"));

}