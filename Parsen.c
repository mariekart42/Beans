#include <stdio.h>
#include <stdlib.h>

// count amount of '\n' -> malloc size for 
// calculate highest amount of ';'

int amount_columns_func(char *csv_mod, int len)
{
     int i = 0;
     int columns = 0;
     while(i <= len)
     {
          if(csv_mod[i] == ';')
          {
               columns++;
          }
     }
}

int amount_lines_func(char *csv)
{
     int i = 0;
     int p = 0;
     int lines = 0;
     int columns = 0;
     while(csv[i] != '\0')
     {
          if(csv[i] == '\n')
          {
               columns = amount_columns_func()
          }
     }
}

char ***parse_csv(char *csv)
{
     lines = amount_lines_func(csv);
     columns = amount_columns_func(csv);
     while()
     {
          while()
          {

          }
     }
}



int main()
{
     char *csv_string = "Ein;Beispiel;für\ndas;bessere;Verständnis\nder;Aufgabe;N5\n";
     char ***csv_array = parse_csv(csv_string);

     printf("%s\n", csv_array[0][0]);
     printf("%s\n", csv_array[1][2]);
     printf("%s\n", csv_array[2][1]);
}