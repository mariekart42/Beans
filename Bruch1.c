#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
  int zaehler;
  int nenner;
} bruch_t;

void bruchEingabe(bruch_t* bruch)
{
    scanf("%d %d", &(bruch->zaehler), &(bruch->nenner));
   // printf("%d %d", (bruch->zaehler), (bruch->nenner));
}

void bruchAusgabe(bruch_t* bruch)
{
    float frac = (float )(bruch->zaehler)/(bruch->nenner);
    printf("%f", frac);
}

void bruchAddition(bruch_t* bruch, bruch_t add)
{
    float result = (float )(bruch->zaehler)/(bruch->nenner)+                                           (float )(add.zaehler)/(add.nenner);
    printf("%f\n", result);
}

void bruchSubtraktion(bruch_t* bruch, bruch_t sub)
{
    float result = (float )(bruch->zaehler)/(bruch->nenner)-                                           (float )(sub.zaehler)/(sub.nenner);
    printf("%f\n", result);
}

void bruchMultiplikation(bruch_t* bruch, bruch_t mult)
{
    float result = (float )(bruch->zaehler)/(bruch->nenner)*                                          (float )(mult.zaehler)/(mult.nenner);
    printf("%f\n", result);
}

void bruchDivision(bruch_t* bruch, bruch_t div)
{
    float result = ( (float )(bruch->zaehler)/(bruch->nenner) )/                                         ( (float )(div.zaehler)/(div.nenner) );
    printf("%f\n", result);
}

float bruchQuotient(bruch_t bruch)
{
    float f = (float )(bruch.zaehler)/(bruch.nenner);
    return f;
}

void bruchErweitern(bruch_t* bruch, int faktor)
{
    (bruch->zaehler) *= faktor;
    (bruch->nenner) *= faktor;
}

void bruchKuerzen(bruch_t* bruch)
{
    if( ( (bruch->zaehler) % ( (bruch->nenner) ) == 0 ) )
    {
        (bruch->zaehler) /= (bruch->nenner);
        (bruch->nenner) *= faktor;
    }
}

int main(void)
{
    printf("gib bruch ein\n");
    
    bruch_t bruch;
    bruchEingabe(&bruch);
    
  /*  printf("gib add ein\n");
    
    bruch_t add;
    bruchEingabe((&add));
    
    printf("gib sub ein\n");
    
    bruch_t sub;
    bruchEingabe((&sub));
    
    printf("gib mult ein\n");
    
    bruch_t mult;
    bruchEingabe((&mult)); */
    
    printf("gib div ein\n");
    
    bruch_t div;
    bruchEingabe((&div));
    

  //  bruchSubtraktion(&bruch, sub);
  //  bruchAddition(&bruch, add);
  //  bruchMultiplikation(&bruch, mult);
    bruchDivision(&bruch, div);
    
}

