#include <stdio.h>
#include "const.h"

extern void loop(void);

int main(void)
{
	printf("%f\n", PI);

	loop();

	return 0;
}
