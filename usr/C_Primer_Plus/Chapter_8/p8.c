#include <stdio.h>
#include <ctype.h>

char get_choice(void);
float get_float(void);
void menu(void);
char get_first(void);

int main(void)
{
	char choice;
	float num1, num2;

	menu();
	while((choice = get_choice()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_float();
		printf("Enter second number: ");
		num2 = get_float();

		switch(choice)
		{
			case 'a':
				printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
				break;
			case 's':
				printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
				break;
			case 'm':
				printf("%.2f * %.2f = %.2f\n", num1, num2, num1*num2);
				break;
			case 'd':
				printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
				break;
			default:
				printf("Quit\n");
				break;
		}
	menu();
	}
	printf("Bye.\n");

	return 0;
}

void menu(void)
{
	printf("Enter the operation of your choice:\n");
        printf("a. add          s. subtract\n");
        printf("m. multiply     d. divide\n");
        printf("q. quit\n");
}

char get_first(void)
{
	int input;

	while(isspace(input = getchar()));
	
	while(getchar() != '\n')
		continue;

	return input;
}

char get_choice(void)
{
	char ch;

	ch = get_first();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please enter a, s, m, d or q.\n");
		ch = get_first();
	}

	return ch;
}

float get_float(void)
{
	float input;
	char ch;

	while(scanf("%f", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a integer.\n");
		printf("Enter the right integer: ");
	}

	while((ch = getchar())!= '\n')
		continue;

	return input;
}
