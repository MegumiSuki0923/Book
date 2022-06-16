#include <stdio.h>

#define LEN	20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void)
{
	struct guy fellow = {
		{"Ewen", "Villard"},
		"griiled salmon",
		"Personality coach",
		58112.00
	};

	printf("%s\n", fellow.handle.first);
	printf("%s\n", fellow.handle.last);

	return 0;
}
