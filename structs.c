#define MAX_NUM_CARS 3
#define MAX_NUM_REPAIRS 5

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
	char* type;
	Date MOTTEst;
	int numOfRepairs;
	Repair repair[MAX_NUM_REPAIRS];
}Car;

typedef struct customer{
	char* name;
	char* phoneNumb;
	char* email;
	int numOfCars;
	Car car[MAX_NUM_CARS];
}Customer; 





