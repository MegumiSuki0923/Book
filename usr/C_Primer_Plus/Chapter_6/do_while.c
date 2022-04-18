#include <stdio.h>

int main(void)
{
        const int  secret_code = 13;
        int enter_code;

        do
        {
                printf("Please enter the secret code:\n");
                scanf("%d", &enter_code);
        }while(enter_code != secret_code);

        printf("Congratulation!");

        return 0;
}