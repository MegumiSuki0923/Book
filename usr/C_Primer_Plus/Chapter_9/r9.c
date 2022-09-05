#include <stdio.h>

void menu(void);
int getchoice(int low, int high);

int main(void)
{
	int rec;

	menu();
	while((rec = getchoice(1, 4)) != 4)
	{
		printf("I'd like %d\n", rec);
	}

	printf("Bye!\n");

	return 0;
}

void menu(void)
{
	printf("Please choose one of the following:\n");
	printf("1) copy files		2) move files\n");
	printf("3) remove files		4) quit\n");
	printf("Enter the number of your choice:\n");
}

int getchoice(int low, int high)
{
	int ans;
	int status;

	while((status = scanf("%d", &ans)) != 1 || ans < low || ans > high)
	{
		if(status != 1)
			scanf("%*s");
		printf("Please enter again an integer.\n");
		menu();
	}

	return ans;
}
