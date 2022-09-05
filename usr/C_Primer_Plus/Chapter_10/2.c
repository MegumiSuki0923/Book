#include <stdio.h>

void copy_arr(double src[], double tar[], int n);
void copy_ptr(double *src, double *tar, int n);
void show(double *tar, int n);

int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];

	copy_arr(source, target1, 5);
	show(target1, 5);

	copy_ptr(source, target2, 5);
	show(target2, 5);

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
