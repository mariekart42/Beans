#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int return_place(char c, char *ptr)
{
	int i = 0;
	while(ptr[i] != '\0')
	{
		if(ptr[i] == c)
			return(i);
		i++;
	}
	return(0);
}

char *substitute(const char *source, const char *target, const char *text)
{
    int i = 0;
    char *arrout;
    arrout = (char *)malloc(strlen(text) * sizeof(char) + 1);
    if(!arrout)
        return(NULL);

	//checkt ob a alles was in text auch in source ist
	while(text[i] != '\0')
	{
		if(strchr(source, text[i]) == NULL)
			return(NULL);
		i++;
	}

	i = 0;
	int place = 0;
	while (text[i] != '\0')
	{
		place = return_place(text[i], (char *)source);
		arrout[i] = target[place];
		i++;
	}

    arrout[i] = '\0';
    return (arrout);
}


// int main(void)
// {
// 	char *str;
// 	str = substitute("012345", "ABCDEF", "1245");
// 	printf("str: %s\n", str);
// 	free(str);
// }