#include <stdio.h>

double min(double x, double y);

int main(void)
{
        double x = 1.1, y = 3.3, _min;

        _min = min(x, y);

        printf("The lesser of %.2lf and %.2lf is %.2lf\n", x, y, _min);

        return 0;
}

double min(double x, double y)
{
        return (x > y) ? y : x;
}