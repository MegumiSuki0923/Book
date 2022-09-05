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

struct person persons[5] = {
	{302039823, {"Dribble", "Medile", "Flossie"}},
	{302039824, {"John", "Fitzgerald", "Kennedy"}},
	{302039825, {"George", "Walker", "Bush"}},
	{302039826, {"Edware", "Adam", "Davis"}},
	{302038727, {"John", "", "Junior"}}
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
	char miname[5][2];
	int i;

	for(i = 0; i < n; i++)
	{
		if(pt[i].human.mname[0] == '\0')
			miname[i][0] = '\0';
		else
		{
			miname[i][0] = pt[i].human.mname[0] ;
			miname[i][0] = toupper(miname[i][0]);
			miname[i][0] = pt[i].human.mname[0] ;
			strcat(miname[i], ".");
		}

		printf("%s\t, %s %s\t - %d\n", pt[i].human.fname, pt[i].human.lname, miname[i], pt[i].socinum);
	}
}
