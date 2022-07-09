#include <stdio.h>
int main()
{
    int limit = 1000;
    int start = 0;
    int cache;
    
    while(start < limit)
    {
        cache = 0;
        
        for(int i = 2; i <= limit/2; i++)
        {
            if( (start % i) == 0)
            {
                cache = 1;
                break;
                
            }
            
        }
        
        if(cache == 0)
        {
            printf("%d ", start);
            start++;
        }
        
    }
    
    
    return 0;
}
