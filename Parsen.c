#include <stdio.h>
#include <stdlib.h>

// count amount of '\n' -> malloc size for 
// calculate highest amount of ';'



int amount_semis(const char *sub_str, int i)
{
     int k = 0;
     int count = 0;
     while(k < i)
     {
          if (sub_str[k] == ';')
          {
               count++;
          }
          k++;
     }
     return (count);
}
// function calculates amount of columns and lines
int amount_lines_and_columns_func(char *csv, char c_or_l)
{
     int i = 0;
     int nl = 0;
     int col = 0;
     int val = 0;
     int start = 0;
	int k = 0;
     while (csv[i] != '\0')
     {
          if (csv[i] == '\n')
          {
			val = amount_semis(csv + start, i);
			//printf("%s\n", csv +1);
			printf("VAL: %d\n", val);
			if (val > col)
				col = val;
			printf("col: %d\n", col);
			start = i - k;
			printf("%s\n", csv + start);
			nl++;
			k = 0;
          }
		i++;
		k++;
     }
	if(c_or_l == 'c')
		return(col +1);
	else
		return(nl+1);
}




// char ***parse_csv(char *csv)
// {
//      lines = amount_lines_func(csv);
//      columns = amount_columns_func(csv);
//      while()
//      {
//           while()
//           {

//           }
//      }
// }



int main()
{
     char *csv_string = "Ein;Beispiel;für\ndas;bessere;Verständnis\nder;Aufgabe;N5\n";
     //char ***csv_array = parse_csv(csv_string);
	printf("string[%d][%d]\n", amount_lines_and_columns_func(csv_string, 'c'), amount_lines_and_columns_func(csv_string, 'l'));
     // printf("%s\n", csv_array[0][0]);
     // printf("%s\n", csv_array[1][2]);
     // printf("%s\n", csv_array[2][1]);
}