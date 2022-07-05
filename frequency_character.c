#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// converts ch to lower or uppercase equivalent
char lower_or_upper(char ch)
{
	if(ch >= 65 && ch <= 90)
		return(ch + 32);
	if(ch >= 97 && ch <= 122)
		return(ch - 32);
	return(0);
}

int frequency(const char string[], char ch)
{
	int i = 0;
	int count = 0;
	char other;
	if(!string)
		return(0);
	other = lower_or_upper(ch);
	if(other == 0)
		return(0);
	while(string[i] != '\0')
	{
		if(string[i] == ch || string[i] == other)
			count++;
		i++;
	}
	return(count);
}

int main(void)
{
	char *string = "Kackbratze";
	char character = 'Y';
	printf("result: %d\n", frequency(string, character));
}

