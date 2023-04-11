#include "functions.h"

int searchByName(int people, char* slName, char* ssName)
{
	int i, j, k;
	int func2;
	char sPlate[7];
	int siker = 0;


	for (i = 0; i < people; i++)
	{
		if (strcmp(slName, sirok[i].lastname) == 0 && strcmp(ssName, sirok[i].surname) == 0)
		{
			siker = 1;
			printf("\n%s %s %s %s %d\n", sirok[i].lastname, sirok[i].surname, sirok[i].phoneNumb, sirok[i].email, sirok[i].numOfCars);
			for (j = 0; j < sirok[i].numOfCars; j++)
			{
				printf("\n%s %s %d.%d.%d %d", sirok[i].car[j].plate, sirok[i].car[j].type, sirok[i].car[j].MOTTEst.year, sirok[i].car[j].MOTTEst.month, sirok[i].car[j].MOTTEst.day, sirok[i].car[j].numOfRepairs);
				for (k = 0; k < sirok[i].car[j].numOfRepairs; k++)
				{
					printf("\n%s %d.%d.%d %d", sirok[i].car[j].repair[k].amit, sirok[i].car[j].repair[k].time.year, sirok[i].car[j].repair[k].time.month, sirok[i].car[j].repair[k].time.day, sirok[i].car[j].repair[k].price);
				}
			}
		}
	}
	puts("");
	if (siker == 1) return 0;
	printf("\nInvalid input! Try again!\n");
	return 1;

}