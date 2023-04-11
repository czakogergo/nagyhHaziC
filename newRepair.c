#include "functions.h"

void newRepair(int people, char* servicePlate)
{
	int i, j;
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	char repairType[15];
	int repairPrice;
	int repairNum;

	puts("\nEnter the type of the repair: ");
	scanf("%s", repairType);
	puts("\nEnter the price: ");
	scanf("%d", &repairPrice);

	for (i = 0; i < people; i++)
	{
		for (j = 0; j < sirok[i].numOfCars; j++)
		{
			if (strcmp(sirok[i].car[j].plate, servicePlate) == 0)
			{
				repairNum = sirok[i].car[j].numOfRepairs;
				strcpy(sirok[i].car[j].repair[repairNum].amit, repairType);
				sirok[i].car[j].repair[repairNum].time.year = tm.tm_year + 1900;
				sirok[i].car[j].repair[repairNum].time.month = tm.tm_mon + 1;
				sirok[i].car[j].repair[repairNum].time.day = tm.tm_mday;
				sirok[i].car[j].repair[repairNum].price = repairPrice;
				sirok[i].car[j].numOfRepairs++;
			}
		}
	}
}