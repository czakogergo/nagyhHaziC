#include "functions.h"

int peopleCount(FILE* p)
{
	int people = 1;
	p = fopen("data.txt", "r");
	char line[500];

	if (!p) {
		perror("\n Unable to open the file");
		exit(1);
	}
	while (fgets(line, sizeof(line), p))
	{
		if (strcmp(line, "\n") == 0)
		{
			people++;
		}
	}
	fclose(p);
	return people;
}