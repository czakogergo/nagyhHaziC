#ifndef STRUKT
#define STRUKT

typedef struct repair {
	char amit[15];
	unsigned mikor;
	unsigned prise;
}Repair;

typedef struct car {
	char rendszam[7];
	char tipus[10];
	unsigned vizsga;
	int numOfRepairs;	
	Repair repair[10];
}Car;

typedef struct customer {
	char nev[15];
	char telszam[13];
	char email[20];
	int numOfCars;
	Car car[3];
}Customer;

#endif // !STRUKt
