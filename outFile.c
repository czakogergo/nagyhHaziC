#include "functions.h"

void outFile(int people) {
	file = fopen("data.txt", "w");
	int i, j, k;
	for (i = 0; i < people; i++)
	{
		fprintf(file, "%s %s %s %s %d\n", sirok[i].lastname, sirok[i].surname, sirok[i].phoneNumb, sirok[i].email, sirok[i].numOfCars);
		for (j = 0; j < sirok[i].numOfCars; j++)
		{
			fprintf(file, "%s %s %d.%d.%d %d\n", sirok[i].car[j].plate, sirok[i].car[j].type, sirok[i].car[j].MOTTEst.year, sirok[i].car[j].MOTTEst.month, sirok[i].car[j].MOTTEst.day, sirok[i].car[j].numOfRepairs);
			for (k = 0; k < sirok[i].car[j].numOfRepairs; k++)
			{
				fprintf(file, "%s %d.%d.%d %d\n", sirok[i].car[j].repair[k].amit, sirok[i].car[j].repair[k].time.year, sirok[i].car[j].repair[k].time.month, sirok[i].car[j].repair[k].time.day, sirok[i].car[j].repair[k].price);
			}
		}
		if (i < people - 1) fprintf(file, "\n");
	}
}