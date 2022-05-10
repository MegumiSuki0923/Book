#include <stdio.h>

#define SIZE	5

double differ(double ar[], int n);

int main(void)
{
	double dif;
	double ar[SIZE] = {1.1, 2.2, 10.0, 0.0, 5.5};

	dif = differ(ar, SIZE);

	printf("The differ is %.2lf.\n", dif);

	return 0;
}

double differ(double ar[], int n)
{
	double max, min;

	max = min = ar[0];

	for(int i = 0; i < n; i++)
	{
		if(ar[i] > max)
			max = ar[i];
		else if(ar[i] < min)
			min = ar[i];
	}

	return max - min;
}
