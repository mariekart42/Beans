#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exchange(char* s, char a, char b)
{
	int i = 0;
	int count = 0;

	while(s[i] != '\0')
	{
		if(s[i] == a)
		{
			s[i] = b;
			count++;
		}			
		i++;
	}
	return(count);
}

int main(void)
{
	char string[] = "Barkinator";
	char a = 'r';
	char b = 'X';
	printf("val: %d\n", exchange(string, a, b)); 
	printf("string: %s\n", string); 

}