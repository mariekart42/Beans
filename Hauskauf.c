#include <stdio.h>

int hauskauf(float sparen_emily, float sparen_sarah, int haus_kosten)
{
    int count = 0;
    int prc = 0;
    float percentage = ((1.5/100));
    float result = 0;
    result = sparen_emily + sparen_sarah;
    
    while(result <= haus_kosten)
    {
        result += percentage * result + 2000;
        count++;
        prc ++;
        if(prc == 36)
        {
            percentage += (0.1/100);
            prc = 0;
        }
    }
    return count;
}
