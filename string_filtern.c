#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int calc_len(const char *str)
{
     int count = 0;
     int i = 0;
     while (str[i] != '\0')
     {
          if((str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122))
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
     str = (char *)calloc(len+1, sizeof(char));
     if (!str)
          return (NULL);
     while (text[i] != '\0')
     {
          if (text[i] >= 65 && text[i] <= 90 || text[i] >= 97 && text[i] <= 122)
          {
               str[k] = text[i];
               k++;
          }
          i++;
     }
     str[k] = '\0';
     return(str);
}

// int main(void)
// {
//      printf("filtered: %s\n", string_filter("bla bums"));

// }