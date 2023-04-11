#include "functions.h"

int carDelete(int people, char* carDelPlate)
{
	int pos;
	int i, j, k;
	int siker = 0;

	for (i = 0; i < people; i++)
	{
		for (j = 0; j < sirok[i].numOfCars; j++)
		{
			if (strcmp(carDelPlate, sirok[i].car[j].plate) == 0)
			{
				siker = 1;
				pos = j;
				for (k = pos - 1;k < sirok[i].numOfCars; k++)
				{
					sirok[i].car[j] = sirok[i].car[j + 1];
				}
				sirok[i].numOfCars--;
			}
		}
	}
	if (siker == 1)
	{
		printf("\nDelete was successful!\n");
		return 0;
	}
	printf("\nInvalid input! Try again!\n");
	return 1;
}
