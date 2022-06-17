#include <stdio.h>

#define MAXTITL	41
#define MAXAUTL	31
#define MAXBKS	100

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

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
	}
	else
		printf("No books.\n");

	return 0;
}
