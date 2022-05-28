#include <stdio.h>

int count = 0;

extern void accumlate(int k);
void report_count(void);

int main(void)
{
	int value;
	register int i;

	puts("Enter a positive integer (0 to quit):");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		count++;
		for(i = value; i >= 0; i--)
			accumlate(i);
		puts("Enter the next positive integer (0 to quit):");
	}
	report_count();

	return 0;
}

void report_count(void)
{
	printf("Loop executed %d times.\n", count);
}
