#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);


int main(void)
{
	char choice;

	while((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a':
				printf("Buy low, sell high.\n");
				break;
			case 'b':
				printf("\a");
				break;
			case 'c':
				count();
				break;
			default:
				printf("Program error.\n");
				break;
		}
	}

	return 0;
}

char get_choice(void)
{
	char ch;

	printf("Enter the letter of your choice:\n");
	printf("a.advice	b.bell\n");
	printf("c.count		q.quit\n");

	ch = get_first();
	while(ch < 'a' || ch > 'c' && (ch != 'q'))
	{
		printf("Please respond with a, b, c or q.\n");
		  ch = get_first();
	}
}

char get_first(void)
{
	char ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;

	return ch;
}

void count(void)
{
	int n;

	printf("Count how far? Enter an integer:\n");

	n = get_int();

	for(int i = 1; i <= n; i++)
		printf("%d", i);
	printf("\n");

	while(getchar() != '\n')
		continue;

}

int get_int(void)
{
	int input;
	char ch;

	while(scanf("%d", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a integer.\n");
		printf("Please try again.\n");
	}

	return input;
}
