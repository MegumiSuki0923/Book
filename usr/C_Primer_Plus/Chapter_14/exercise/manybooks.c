#include <stdio.h>

#define MAXTITL	41
#define MAXAUTL	31
#define MAXBKS	100

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void listByValue(struct book library[], int n);
void show(struct book library[], int n);

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index;

	printf("Please enter the book title (Press [enter] to quit):\n");
	while(count < MAXBKS && gets(library[count].title) && library[count].title[0] != '\0')
	{
		printf("Now enter the author:\n");
		gets(library[count].author);
		printf("Now enter the value:\n");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			printf("Enter the next title:\n");
	}

	if(count > 0)
	{
		printf("Here is the list of your books:\n");
		for(index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		printf("---------------------------------------------------\n");
		printf("Here is the list of your value:\n");
		listByValue(library, MAXBKS);
		show(library, MAXBKS);
	}
	else
		printf("No books.\n");

	return 0;
}

void listByValue(struct book library[], int n)
{
	struct book temp;
	int i, j;

	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; i < n; i++)
		{
			if(library[i].value > library[j].value)
			{
				temp = library[i];
				library[i] = library[j];
				library[j] = temp;
			}
		}
	}
}

void show(struct book library[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
	}
}
