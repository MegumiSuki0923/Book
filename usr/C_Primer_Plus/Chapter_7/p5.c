#include <stdio.h>

int main(void)
{
        int num;
        int n_odd = 0, n_even = 0;
        double sum_odd = 0.0, sum_even = 0.0;

        printf("Enter numbers (enter 0 to quit):\n");
        while(1)
        {
                scanf("%d", &num);
                if(num == 0)
                        break;
                switch (num % 2)
                {
                        case 0:
                                n_even++;
                                sum_even += num;
                                break;
                        case 1:
                                n_odd++;
                                sum_odd += num;
                                break;
                        default:
                                break;
                }
        }

        printf("You have input %d odd, %d even, the average of odd is %.2f, the average of even is %.2f\n",
               n_odd, n_even, (float)sum_odd / n_odd, (float)sum_even / n_even);

        return 0;
}