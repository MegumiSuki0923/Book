#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN	81

void ToUpper(char *str);
void ToLower(char *str);
void Transpose(char *str);
void Dummy(char *str);
void show(void (*pf)(char *), char *str);
char showmenu(void);
void eatline(void);

int main(void)
{
	char string[LEN], copy[LEN];
	char choice;
	void (*pfunc)(char *str);

	puts("Enter a string (empty line to quit):");
	while(gets(string) && string[0] != '\0')
	{
		while((choice = showmenu()) != 'n')
		{
			switch(choice)
			{
				case 'u':
					pfunc = ToUpper;
					break;
				case 'l':
					pfunc = ToLower;
					break;
				case 't':
					pfunc = Transpose;
					break;
				case 'o':
					pfunc = Dummy;
					break;
			}
			strcpy(copy, string);
			show(pfunc, copy);
		}
		puts("Enter next string:");
	}

	printf("Bye!");

	return 0;
}

void ToUpper(char *str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char *str)
{
	while(*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char *str)
{
	while(*str)
	{
		if(islower(*str))
			*str = toupper(*str);
		else if(isupper(*str))
			*str = tolower(*str);
		str++;
	}
}

void Dummy(char *str)
{
}

void show(void (*pf)(char *), char *str)
{
	(*pf)(str);
	puts(str);
}

char showmenu(void)
{
	char ans;

	puts("Enter menu choice:");
	puts("u) uppercase	l) lowercase");
	puts("t) transposed	o) original case");
	puts("n) next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();

	while((strchr("ulton", ans)) == NULL)
	{
		puts("Please enter u, l, t, o, n");
		ans = getchar();
		eatline();
	}

	return ans;
}

void eatline(void)
{
	while(getchar() != '\n')
		continue;
}
