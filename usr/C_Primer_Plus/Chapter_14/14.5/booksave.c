#include <stdio.h>
#include <stdlib.h>

#define MAXTITL	40
#define MAXAUTL	40

#define MAXBKS	10

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	FILE *pbooks;
	int count = 0, filecount;
	struct book library[MAXBKS];
	int i;

	if((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fprintf(stderr, "Could not open file book.dat.\n");
		exit(EXIT_FAILURE);
	}
	rewind(pbooks); // 相当于fseek(pbooks, 0, SEEK_SET)

	while(count < MAXBKS && fread(&library[count], sizeof(struct book), 1, pbooks) == 1)
	{
		if(count == 0)
			printf("Current contents of book.dat:\n");
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;

	if(count == MAXBKS)
	{
		printf("The file book.dat is full.\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter the title:\n");
	while(count < MAXBKS && gets(library[count].title) && library[count].title[0] != '\0')
	{
		puts("Now enter the author:");
		gets(library[count].author);
		puts("Then, enter the value:");
		scanf("%f", &library[count].value);
		count++;
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			printf("Enter the next title:\n");
	}

	if(count > 0)
	{
		printf("Here is the data in file book.dat:\n");
		for(i = 0; i < count; i++)
			printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
		fwrite(&library[filecount], sizeof(struct book), count - filecount, pbooks);
	}
	else
		printf("No book.\n");

	return 0;
}

