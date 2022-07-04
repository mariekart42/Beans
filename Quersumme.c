#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

int len_of_arr(int n)
{
	int	count;
	
	count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
	return (count);
}

int iQS(int n)
{
    int		i = 0;
    int		count = len_of_arr(n);
    int		arr[count];
	
	while (n != 0)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	if (count == 1)
		return(arr[0] *= -1);
	int result = arr[0];
	i = 1;
	while (count > 1)
	{
		result -= arr[i];
		i++;
		count--;
		if (count >= 2)
		{
			result += arr[i];
			i++;
			count--;
		}
	}
	return(result);
}

int main(void)
{
    int   n;        // user input
    int   cache;    // result
    
    scanf("%d", &n);
    cache = iQS(n);
    printf("%d", cache);
    return (0);
}