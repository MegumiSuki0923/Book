#include <stdio.h>
#include <stdlib.h>

#define SIZE	40
#define ROWS	20
#define COLS	30

int main(void)
{
	char filename[SIZE];
	FILE *fp;
	int array[ROWS][COLS];
	int i, j;

	puts("Please enter a filename:");
	gets(filename);

	if((fp = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", filename);
		exit(EXIT_FAILURE);
	}

	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			fscanf(fp, "%d", &array[i][j]);
		}
	}

	for(i = 0; i < ROWS; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			switch(array[i][j])
			{
				case 0:
					putchar(' ');
					break;
				case 1:
					putchar('.');
					break;
				case 2:
					putchar('\'');
					break;
				case 3:
					putchar(':');
					break;
				case 4:
					putchar('~');
					break;
				case 5:
					putchar('*');
					break;
				case 6:
					putchar('=');
					break;
				case 7:
					putchar('+');
					break;
				case 8:
					putchar('%');
					break;
				case 9:
					putchar('#');
					break;
				default:
					printf("Sorry, something wrong!.\n");
			}
		}
		putchar('\n');
	}

	fclose(fp);

	return 0;
}
