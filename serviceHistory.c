#include "functions.h"

int serviceHistory(int people, char* whichCar)
{
	int i, j, k;
	int siker = 0;
	for (i = 0; i < people; i++)
	{
		for (j = 0; j < sirok[i].numOfCars; j++)
		{
			if (strcmp(whichCar, sirok[i].car[j].plate) == 0)
			{
				siker = 1;
				for (k = 0; k < sirok[i].car[j].numOfRepairs; k++)
				{
					printf("\n\nType of repair: %s\nDate of the repair: %d.%d.%d\nPrice: %d", sirok[i].car[j].repair[k].amit, sirok[i].car[j].repair[k].time.year, sirok[i].car[j].repair[k].time.month, sirok[i].car[j].repair[k].time.day, sirok[i].car[j].repair[k].price);
				}
			}
		}
	}
	if (siker == 1) return 0;
	printf("Invalid input! Try again!\n");
	return 1;
}