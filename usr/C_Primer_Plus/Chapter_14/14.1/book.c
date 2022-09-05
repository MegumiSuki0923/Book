#include <stdio.h>

#define MAXTITL	41
#define MAXAUTL	31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	// 通过book模板来分配空间
	struct book library;
	puts("Please enter the book title:");
	gets(library.title);
	puts("Now enter the author:");
	gets(library.author);
	printf("Now enter the value:,\n");
	scanf("%f", &library.value);

	printf("%s by %s: %.2f\n", library.title, library.author, library.value);

	printf("Done.\n");

	return 0;
}
