// Permutation: 9 digits and each only once
// eg. 123456789
// if success print line
// if not print-> "keine gültige Permutation."

#include <stdio.h>
#include <stdlib.h>

int *len_of_input(int n, int *ar)
{
	int	i;
	
	i = 0;
     while(n > 0)
     {
		ar[i] = n % 10;
		n /= 10;
		i++;
     }
	if (i != 9)
		return(NULL);
	return(ar);
}

int nested_loop(int *arr)
{
	int	m;
	int	p;
	
	m = 0;
	p = 1;
	while (m <= 9)
	{
		while (m + p - 1 < 9)
		{
			if (arr[m] == arr[p + m])
				return (-1);
			p++;
		}
		p = 1;
		m++;
	}
	return(1);
}

int main(void)
{
     int	n;		// user input
     int	i;		// iterating
     int	*arr;	// storage of input

	arr = (int *)malloc(9);
     scanf("%d", &n);
	arr = len_of_input(n, arr);
	if (arr == NULL)
	{
		printf("keine gültige Permutation. (input argument wrong)\n");
		return(0);
	}
	if (nested_loop(arr) == -1)
		printf("keine gültige Permutation. (more than one number equal)\n");
	else
	{
		i = 0;
		printf("1 2 3 4 5 6 7 8 9\n");
		while (i++ < 9)
			printf("%d ", arr[i]);
	}
	free(arr);
}