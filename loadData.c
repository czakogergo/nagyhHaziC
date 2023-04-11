#include "functions.h"

void loadData(int people)
{
	int sor = 1;
	int repairnum, carnum, pnum;
	int i = 0, j = 0, k = 0;
	file = fopen("data.txt", "r");
	char line[500];
	pnum = people;
	sirok = (Customer*)malloc(sizeof(Customer) * people);

	while (fgets(line, sizeof(line), file))
	{
		if (strcmp(line, "\n") == 0)
		{
			continue;
		};
		if (sor == 1)
		{
			sscanf(line, "%s %s %s %s %d", sirok[i].lastname, sirok[i].surname, sirok[i].phoneNumb, sirok[i].email, &sirok[i].numOfCars);
			carnum = sirok[i].numOfCars;
			j = 0;
			sor = 2;
		}
		else if (sor == 2)
		{
			sscanf(line, "%s %s %d.%d.%d %d", sirok[i].car[j].plate, sirok[i].car[j].type, &sirok[i].car[j].MOTTEst.year, &sirok[i].car[j].MOTTEst.month, &sirok[i].car[j].MOTTEst.day, &sirok[i].car[j].numOfRepairs);
			repairnum = sirok[i].car[j].numOfRepairs;
			k = 0;
			sor = 3;
		}
		else if (sor == 3)
		{
			sscanf(line, "%s %d.%d.%d %d", sirok[i].car[j].repair[k].amit, &sirok[i].car[j].repair[k].time.year, &sirok[i].car[j].repair[k].time.month, &sirok[i].car[j].repair[k].time.day, &sirok[i].car[j].repair[k].price);
			repairnum--;
			if (repairnum > 0)
			{
				k++;
				sor = 3;
			}
			else
			{
				carnum--;
				if (carnum > 0)
				{
					j++;
					sor = 2;
				}
				else
				{
					pnum--;
					if (pnum > 0) {
						sor = 1;
						i++;
					}
				}
			}

		}

	}
}