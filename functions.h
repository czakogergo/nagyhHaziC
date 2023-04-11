#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct date {
	int year;
	int month;
	int day;
}Date;

typedef struct repair {
	char amit[15];
	Date time;
	int price;
}Repair;

typedef struct car {
	char plate[7];
	char type[20];
	Date MOTTEst;
	int numOfRepairs;
	Repair repair[3];
}Car;

typedef struct customer {
	char lastname[10];
	char surname[10];
	char phoneNumb[15];
	char email[25];
	int numOfCars;
	Car car[3];
}Customer;

Customer* sirok;
FILE* file;

int peopleCount(FILE* p);
void loadData(int people);
void carAppend(int people);
int carDelete(int people, char* carDelPlate);
int searchByName(int people, char* slName, char* ssName);
int searchByPlate(int people, char* sPlate);
void newRepair(int people, char* servicePlate);
int serviceHistory(int people, char* whichCar);
void MOTTTest(int people);
void outFile(int people);


