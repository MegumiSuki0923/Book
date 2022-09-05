#include <stdio.h>
#include <string.h>

#define SIZE	81

void mystrncpy(char *s1, const char *s2, int n);

int main(void)
{
	char str1[SIZE];
	char str2[SIZE];
	int len;

	puts("Enter a srting:");
	while(gets(str2) && str2[0])
	{
		puts("How many characters do you want to copy in?");
		scanf("%d", &len);
		getchar();
		mystrncpy(str1, str2, len);
		printf("Now the str1 is %s.\n", str1);
		puts("Enter the next string (enter to quit)");
	}

	return 0;
}

void mystrncpy(char *s1, const char *s2, int n)
{
	for(int i = 0; i < n; i++)
		*(s1 + i) = *(s2 + i);
	if(strlen(s2) >= n)
		*(s1 + n) = '\0';
}
