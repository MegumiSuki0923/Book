#ifndef __P3_H__
#define __P3_H__

#include <stdio.h>
#include <math.h>

#define	PI	3.1415926

struct polar {
	double len;
	double angle;
};

struct rect {
	double x;
	double y;
};

struct rect polar_to_rect(const struct polar *p);

#endif
