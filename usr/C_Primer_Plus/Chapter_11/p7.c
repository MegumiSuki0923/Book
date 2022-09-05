#include <stdio.h>
#include <string.h>

#define SIZE	81

char *string_in(const char *str1, const char *str2);

int main(void)
{
	char s1[SIZE];
	char s2[SIZE];
	char *p;

	while(1)
	{
		puts("Please input s1:");
		gets(s1);
		puts("Please enter s2:");
		gets(s2);

		p = string_in(s1, s2);

		if(p)
			printf("Find s1 in s1 at %p.\n", p);
		else
			printf("Can not find s2 in s1\n");
	}

	return 0;
}

char *string_in(const char *str1, const char *str2)
{
	int status;
	int len2 = strlen(str2);
	int try_num = strlen(str1) - strlen(str2) + 1;

	while((status = strncmp(str1, str2, len2)) && try_num--)
		str1++;

	if(status)
		return NULL;
	else
		return (char *)str1;
}
