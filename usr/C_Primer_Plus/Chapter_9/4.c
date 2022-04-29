#include <stdio.h>

double harmonic(double m, double n);

int main(void)
{
        double x, y;

        printf("Enter the x and y:\n");
        scanf("%lf %lf", &x, &y);

        printf("The harmonic mean of %.2lf and %.2lf is %.2lf\n", x, y, harmonic(x, y));

        return 0;
}

double harmonic(double m, double n)
{
        return 1 / ((1 / m + 1 / n) / 2);
}