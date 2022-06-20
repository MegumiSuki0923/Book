// #include <stdio.h>
#include "main.h"
#include "up.h"

int count = 0;

int main(void)
{
	while(1)
	{
		up();
		printf("Count = %d\n", count);
		sleep(1);
	}

	return 0;
}
