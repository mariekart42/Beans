#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int strendX(const char *s, const char *t)
{
    int j = 0;
    int length_s = (int )strlen(s);
    int length_t = (int )strlen(t);
    int length = (length_s - length_t);
    char arr[length];
    arr[length] = '\0';
    int i = length;
    
    while(i <= length_s)
    {
        arr[j] = s[i];
        j++;
        i++;
    }
    
    puts(arr);
    
    if( strcmp(arr, t) == 0 )
    {
        return 1;
    }
    
    else
        return 0;
}






char *strchrX(const char *s, int c)
{
    int i = 0;
    int loc = -1;
    int len = (int )strlen(s);
    
    while(i < len)
    {
        if(s[i] == c)
        {
            loc = i;
        }
        i++;
    }
    
    if(loc == -1)
    {
        return NULL;
    }
    else
        return s[loc];
    
}




 char *strstrX(const char *s, const char *t)
{
     int i = 0;
     int j = 0;
     int len_s = (int )strlen(s);
     int len_t = (int )strlen(t);
     char arr[len_t];
  
     
     while(j < len_s)
     {
         while(i < len_t)
         {
             arr[i] = s[j];
             i++;
             j++;
         }
         if(strcmp(arr,t) == 0)
         {
             return t[j-len_t];
         }
         i = 0;
     }
     return NULL;
}


