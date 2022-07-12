#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int   is_prime(int nb)
{
     int       i;

     i = 2;
     if (nb < 2)
          return (0);
     while (i < nb)
     {
          if (nb % i == 0)
               return (0);
          i++;
     }
     return (1);
}

int main(void)
{
    int zahlen[999];
	int x = 0;
	int j = 2;

	while(j < 1000)
	{
		zahlen[x] = j;
		x++;
		j++;
	}

	int cross = 2;
	int k = 0;

	while(cross < 10)
	{
		while(k < 1000)
		{
			if(zahlen[k] != cross && zahlen[k] % cross == 0)
				zahlen[k] = 0;
			k++;
		}
		k = 0;
		cross++;
	}
	int i = 0;
    while(i < 1000)
    {
        if(zahlen[i] != 0)
        {
            printf("%d ", zahlen[i]);
        }
		i++;
    }
	printf("now\n");
	i=0;
	while(i < 1000)
	{
		if(is_prime(zahlen[i]) == 0 && zahlen[i] != 0)
		{

			printf("\nNOPE : zahlen[%d] = %d\n", i, zahlen[i]);
		}
		i++;
	}
    return 0;
}
