#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "functions.h"


int main()
{
	int vege = 1;
	int func, func1, func2;
	int people = peopleCount(file);
	char carDelPlate[7];
	char slName[10], ssName[10];
	char sPlate[7];
	char servicePlate[7];
	char whichCar[7];
	loadData(people);

	while (vege != 0) {
		system("cls");
		puts("\n[1] Car append/delete\n[2] Search\n[3] Repair register"
			"\n[4] Display the service history \n[5] Close to deadline cars\n[6] Exit");

		puts("Choose a function\n");
		scanf("%d", &func);

		switch (func) {
		case 1:
			puts("\n[1] Car append\n[2] Car delete\n");
			scanf("%d", &func1);
			switch (func1) {
			case 1:
				carAppend(people);
				break;
			case 2:
				puts("Which car's  details do you want to delete?\nEnter the number plate: ");
				do {
					scanf("%s", carDelPlate);
				}while(carDelete(people, carDelPlate) != 0);
				getchar();
				getchar();
				break;
			}
			break;
		case 2:
			puts("\n[1]Search by name\n[2]Search by number plate\n");
			scanf("%d", &func2);
			switch (func2)
			{
			case 1:
				printf("\nThe name you search for:\n");
				do {
					scanf("%s %s", slName, ssName);
				} while (searchByName(people, slName, ssName) != 0);

				getchar();
				getchar();
				break;
			case 2:
				puts("\nThe number plate you search for:");
				do {
					scanf("%s", sPlate);
				} while (searchByPlate(people, sPlate) != 0);
				getchar();
				getchar();
				break;
			}
			break;
		case 3:
			puts("Enter the number plate of the repaired car: ");
			scanf("%s", servicePlate);
			newRepair(people, servicePlate);
			getchar();
			getchar();
			break;
		case 4:
			printf("\nWhich car's repair? Enter the plate number:\n");
			do {
				scanf("%s", whichCar);
			} while (serviceHistory(people, whichCar) != 0);
			getchar();
			getchar();

			break;
		case 5:
			MOTTTest(people);
			getchar();
			getchar();

			break;
		case 6:
			vege = 0;
			break;

		default:
			printf("Invalid input!");
		}
	}
	outFile(people);
	fclose(file);
	return 0;
}

