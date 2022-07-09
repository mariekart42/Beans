#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

// int main(int argc, char* argv[])
// {
//     float cache = 0;
//     int i = 0;
//     float result = 0;
//     while(i < argc)
//     {
//         scanf("%f", &cache);
//         result += cache;
//         i++;
//     }
//     result /= argc;
//     printf("%f", result);
//     return 0;
// }


/**
 * @brief function converts string argument to integer type(returns int)
 * stops if it reaches a no digit character, or a not '-' '+' character
 * spaces & tabs are okay only BEFORE argument
 * valid arguments: "423", "-273", "+765", "   -765"
 * @param str char string
 * @return int converted char string if given argument is valid, else returns 0
 */
int	ft_atoi(const char *str)
{
	int		val;
	int		minus;
	int		i;

	val = 0;
	minus = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		val = 10 * val + str[i] - 48;
		i++;
	}
	return (val * minus);
}

int main(int argc, char *argv[])
{
    int i = 1;
    float result;
    while(i < argc)
    {
        result += atoi(argv[i]);
        i++;
    }
    printf("result: %f\n", result);
    printf("result: %f\n", result/argc-1);
    // int num = result;
    // printf("num: %d\n", num/5);
    printf("argc: %d\n", argc-1);
}
