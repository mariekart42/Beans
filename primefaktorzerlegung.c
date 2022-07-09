#include <stdio.h>

// output is richtig aber keine Ahnung was returnen wenn die Zahl kleiner 2 ist
// kein plan wie man aus der konsole "factor .." aufruft, vielleicht argc argv


// returns 1 if nb is prime, returns 0 if not prime
unsigned int   is_prime(unsigned int nb)
{
     unsigned int       i;

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

// finds next prime number
unsigned int   next_prime(unsigned int nb)
{
     nb++;
     while (is_prime(nb) == 0)
          nb++;
     return (nb);
}

// prints primefaktorzerlegung
void factor(unsigned int n, unsigned int prime)
{
     if (n < 2)
          return ;
     if (is_prime(n) == 1)
     {
          printf("%d ", n);
          return ;
     }
     if (n % prime == 0)
     {
          printf("%d ", prime);
          factor(n /= prime, prime);
     }
     else
          factor(n, next_prime(prime));
}

int main(void)
{
     // int prime = 31;
     // printf("next_prime(%d) = %d\n", prime, next_prime(prime));

     unsigned int number = 1;
     // scanf("%d", &number);
     printf("factor(%d): ", number);
     factor(number, 2);
}