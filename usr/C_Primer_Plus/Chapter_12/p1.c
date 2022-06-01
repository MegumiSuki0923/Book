#include <stdio.h>

// int units = 0;
void critic(int *num);

int main(void)
{
	int units;

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while(units != 56)
		critic(&units);
	puts("You must have looked it up!");

	return 0;
}

void critic(int *num)
{
	puts("No luck, chummy, Try again.");
	scanf("%d", num);
}
