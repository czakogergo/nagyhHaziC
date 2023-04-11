#include "functions.h"

void carAppend (int people) 
{
	int func1;
	char carAPlastname[10];
	char carAPsurname[10];
	char carAPplate[7];
	char carAPtype[10];
	int carAPy, carAPm, carAPd;
	int carAPnumR;
	int carAPnumC;
	int i;

	printf("\nWhat's your name?\n");
	scanf("%s %s", carAPlastname, carAPsurname);
	puts("\nYou have to input the details of the car:");
	puts("\nNumber plate: ");
	scanf("%s", carAPplate);
	while (strlen(carAPplate) != 6) {
		printf("Invalid input! Try again!\n");
		scanf("%s", carAPplate);
	}
	puts("\nType: ");
	scanf("%s", carAPtype);
	puts("\nMOTTest date (yyyy.mm.dd): ");
	scanf("%d.%d.%d", &carAPy, &carAPm, &carAPd);
	for (i = 0; i < people; i++)
	{
		if (strcmp(carAPlastname, sirok[i].lastname) == 0 && strcmp(carAPsurname, sirok[i].surname) == 0)
		{
			carAPnumC = sirok[i].numOfCars;
			sirok[i].numOfCars++;
			strcpy(sirok[i].car[carAPnumC].plate, carAPplate);
			strcpy(sirok[i].car[carAPnumC].type, carAPtype);
			sirok[i].car[carAPnumC].MOTTEst.year = carAPy;
			sirok[i].car[carAPnumC].MOTTEst.month = carAPm;
			sirok[i].car[carAPnumC].MOTTEst.day = carAPd;
			sirok[i].car[carAPnumC].numOfRepairs = 0;
		}
	}
	newRepair(people, carAPplate);
}
