#include <stdio.h>

#define SIZE	7

void copy_arr(double src[], double tar[], int n);
void copy_ptr(double *src, double *tar, int n);
void show(double *tar, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target1[SIZE];
	double target2[SIZE];

	copy_arr(source, target1, SIZE);
	show(target1, SIZE);

	copy_ptr(source+3, target2, 3);
	show(target2, SIZE);

	return 0;
}

void copy_arr(double src[], double tar[], int n)
{
	for(int i = 0; i < n; i++)
		tar[i] = src[i];
}

void copy_ptr(double *src, double *tar, int n)
{
	for(int i = 0; i < n; i++)
		*(tar+i) = *(src+i);
}

void show(double *tar, int n)
{
	for(int i = 0; i < n; i++)
		printf("%.1f ", *(tar+i));
	printf("\n");
}
