#include "functions.h"

void MOTTTest(int people)
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int i, j, k;
	printf("\nMOTTest is needed in one week:");
	for (i = 0; i < people; i++)
	{
		for (j = 0; j < sirok[i].numOfCars; j++)
		{
			if (tm.tm_year + 1900 == sirok[i].car[j].MOTTEst.year + 1 && tm.tm_mon + 1 == sirok[i].car[j].MOTTEst.month && 
				0 <= sirok[i].car[j].MOTTEst.day - tm.tm_mday && 7 >= sirok[i].car[j].MOTTEst.day - tm.tm_mday)
			{
				printf("\n\nOwner: %s %s\nPlate number: %s\nDeadline: %d.%d.%d\n",
				sirok[i].lastname, sirok[i].surname, sirok[i].car[j].plate, sirok[i].car[j].MOTTEst.year, 
				sirok[i].car[j].MOTTEst.month, sirok[i].car[j].MOTTEst.day);
			}
		}
	}
}