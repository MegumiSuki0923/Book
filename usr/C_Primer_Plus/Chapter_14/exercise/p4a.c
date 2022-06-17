#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN	15

struct name {
	char fname[LEN];
	char mname[LEN];
	char lname[LEN];
};

struct person {
	int socinum;
	struct name human;
};

struct person persons = {
	{302039823, {"Dribble", "Medile", "Flossie"}},
	{302039824, {"John", "Fitzgerald", "Kennedy"}},
	{302039825, {"George", "Walker", "Bush"}},
	{302039826, {"Edware", "Adam", "Davis"}},
	{302038727, {"John", "Wilson", "Junior"}}
};

void show(const struct person pt[], int n);

int main(void)
{
	printf("**************************************\n");
	printf("List by origin:\n");
	show(persons, 5);

	return 0;
}

void show(const struct person pt[], int n)
{
	char miname[2];
	int i;

	for(i = 0; i < n; i++)
	{
		if(pt[i].human.mname != '\0')
			miname = '\0'
		else
		{
			pt[i].human.mname[0] = toupper(pt[i].human.mname[0]);
			miname = strcat(pt[i].human.mname[0], ".");
		}

		printf("%s, %s %s - %d", pt[i].human.fname, pt[i].lname, miname);
	}
}
