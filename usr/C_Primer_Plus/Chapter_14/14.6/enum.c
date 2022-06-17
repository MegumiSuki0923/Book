#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN	30

enum spectrum {
	red, orange, yellow, green, blue, violet
};
const char *colors[] = {
    "red", "orange", "yellow", "green", "blue", "violet"
};

int main(void)
{
	char choice[LEN];
	int color;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit):");
	while(gets(choice) && choice[0] != '\0')
	{
		for(color = 0; color <= violet; color++)
		{
			if((strcmp(choice, colors[color])) == 0)
			{
				color_is_found = true;
				break;
			}
		}
		if(color_is_found)
		{
			switch (color)
			{
			case red:
				puts("Roses are red");
				break;
			case orange:
				puts("Poppies are orange");
				break;
			case yellow:
				puts("Sunflowers are yellow");
				break;
			case green:
				puts("Grass is green");
				break;
			case blue:
				puts("Bluebell are blue");
				break;
			case violet:
				puts("Violets are violet");
				break;
			default:
				break;
			}
		}
		else
			printf("I don't know the color %d.\n", color);
		
		color_is_found = false;
		printf("Next color (Enter empty to quit):");
	}

	return 0;
}
