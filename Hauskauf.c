#include <stdio.h>

int hauskauf(float sparen_emily, float sparen_sarah, int haus_kosten)
{
	int		month = 0;
	float	percent = 0.015;
	float	money = 0;
		
	money = sparen_emily + sparen_sarah;
	while (money <= haus_kosten)
	{
		if(month % 36 == 0 && month != 0)
			percent += 0.001;
		money += percent * money + 2000;
		month++;
	}
	return (month);
}

int main()
{
    printf("-> %d\n", hauskauf(15000.0, 20000.42, 80000));
}