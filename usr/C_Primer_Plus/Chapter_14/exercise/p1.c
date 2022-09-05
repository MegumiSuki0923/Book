#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct month {
	char monthname[10];
	char abbrev[4];
	int days;
	int num_month;
};

const struct month months[12] = {
	{"January", "Jan", 31, 1},
	{"Feburay", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sept", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12}
};

int days(char *pt);

int main(void)
{
	char input[20];
	int total;

	puts("Enter the name of month:");
	while(gets(input) && input[0] != '\0')
	{
		total = days(input);
		printf("There are %d days through %s.\n", total, input);
		printf("Enter the next month (empty line to quit):\n");
	}

	puts("Bye!");

	return 0;
}

int days(char *pt)
{
	int i;
	int mon_num = 0;
	int total = 0;

	pt[0] = toupper(pt[0]);
	for(i = 1; pt[i] != '\0'; i++)
		pt[i] = tolower(pt[i]);

	for(i = 0; i < 12; i++)
	{
		if(strcmp(pt, months[i].monthname) == 0)
			mon_num = months[i].num_month;
	}

	for(i = 0; i < mon_num; i++)
		total += months[i].days;

	return total;
}
