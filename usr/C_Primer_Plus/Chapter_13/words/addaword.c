#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX	40

int main(int argc, char *argv[])
{
	FILE *fp;
	char words[MAX];

	if((fp = fopen("words", "a+")) == NULL)
	{
		fprintf(stderr, "Could not open file words.\n");
		exit(1);
	}
	puts("Enter words to add to the file (press ENTER at the end of sentence):");
	while(gets(words) && words[0] != '\0')
		fprintf(fp, "%s", words);
	puts("File contens:");
	// 让指针指向文件开始
	rewind(fp);
	while(fscanf(fp, "%s", words) == 1)
		puts(words);

	if(fclose(fp) != 0)
	{
		fprintf(stderr, "Could not close the file.\n");
		exit(2);
	}

	return 0;
}
