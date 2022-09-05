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
	struct guy fellow[2] = {
		{
			{"Ewen", "Villard"},
			"griiled salmon",
			"Personality coach",
			58112.00
		},
		{
			{"Rondney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			23400.00
		}
	};
	struct guy *him;

	printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
	// 结构体的名字并不等于结构体的首地址
	him = &fellow[0];
	printf("address #1: %p #2: %p\n", him, him+1);
	printf("him->income is %.2f\n", him->income);
	printf("(*him).income is %.2f\n", (*him).income);

	printf("him->fafood is %s\n", him->favfood);

	return 0;
}
