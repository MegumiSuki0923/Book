#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct month {
	char monthname[10];
	char abbrev[4];
	int days;
	int num_month;
};

struct month months[12] = {
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

void eatline(void);
int days(int year, int month, int day);
int leapyear(int year);

int main(void)
{
	int day, month, year;
	char mname[10];
	int i;

	printf("Please enter the year: ");
	while(scanf("%d", &year) == 1)
	{
		printf("Then, Please enter the month: ");
		if(scanf("%d", &month) == 1)
			eatline();
		else
		{
			gets(mname);
			for(i = 0; i < 12; i++)
			{
				if(strcmp(mname, months[i].monthname) == 0 || strcmp(mname, months[i].abbrev) == 0)
				{
					month = months[i].num_month;
					break;
				}
			}
		}
		printf("Now, enter the day: ");
		while(scanf("%d", &day) != 1)
		{
			printf("Please enter a number: ");
			eatline();
		}

		printf("%d days has passed.\n", days(year, month, day));

		eatline();
		printf("***********************************************\n");
		printf("Enter the next year (enter q to quit): ");
	}

	puts("Bye!");

	return 0;
}

void eatline(void)
{
	while(getchar() != '\n')
		continue;
}

int days(int year, int month, int day)
{
	int total = 0;
	int i;

	leapyear(year) ? (months[1].days = 29) : (months[1].days = 28);

	for(i = 0; i < month - 1; i++)
		total += months[i].days;

	return total+day;
}

int leapyear(int year)
{
	if(year % 4 == 0)
		return 1;
	else
		return 0;
}
