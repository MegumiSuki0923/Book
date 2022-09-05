#include <stdio.h>

#define SIZE	10
#define PAR	72


int main(void)
{
	int scores[SIZE];
	int sum = 0;
	float average;
	int index;

	printf("Enter %d golf scores:\n", SIZE);
	for(index = 0; index < SIZE; index++)
		scanf("%d", &scores[index]);

	printf("Here are your input:\n");
	for(index = 0; index < SIZE; index++)
		printf("%5d", scores[index]);
	printf("\n");

	for(index = 0; index < SIZE; index++)
		sum += scores[index];
	printf("The sum is %d\n", sum);

	average = (float)sum / SIZE;
	printf("And the average is %.2f\n", average);

	printf("The handicap is %.2f\n", average - PAR);

	return 0;
}
