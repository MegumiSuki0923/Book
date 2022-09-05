#include <stdio.h>

int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;

	float min = MAX;
	float max = MIN;

	printf("Please enter the score:\n");
	while(scanf("%f", &score) == 1)
	{
		if(score < MIN || score > MAX)
		{
			printf("%.1f is invalid score, please enter again.\n", score);
			continue;
		}
		printf("Accepting the score.\n");
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;

		printf("Enter q to quit:\n");
	}

	if(n > 0)
	{
		printf("Average of %d socres is %.1f\n", n, total/n);
		printf("The max score is %.1f\n", max);
		printf("The min score is %.1f\n", min);
	}
	else
		printf("No valid score entered\n");

	return 0;
}
