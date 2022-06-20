#include <stdio.h>

#define YES	1
#define NO	0

#define BLACK	0
#define	RED	1
#define	GREEN	2
#define	YELLOW	3
#define	BLUE	4
#define	MAGENTA	5
#define CYAN	6
#define	WHITE	7

#define SOLID	0
#define DOTTED	1
#define DASHED	2

const char *colors[8] = {
	"black",
	"red",
	"green",
	"yellow",
	"blue",
	"magenta",
	"cyan",
	"white"
};

const char *styles[3] = {
	"solid",
	"dotted",
	"dashed"
};

struct box_props {
	// 是否透明
	unsigned int opaque		:1;
	// 填充的颜色
	unsigned int fill_color		:3;
	// 是否显示边框
	unsigned int show_border	:1;
	// 边框颜色
	unsigned int border_color	:3;
	// 边框状态 实线 点虚线 虚线
	unsigned int border_style	:2;
};

void show_settings(const struct box_props *pt);

int main(void)
{
	struct box_props box = {YES, YELLOW, YES, GREEN, DASHED};

	show_settings(&box);

	return 0;
}

void show_settings(const struct box_props *pt)
{
	printf("Bos is %s\n", pt->opaque == YES ? "opaque" : "transparent");
	printf("The fill color is %s\n", colors[pt->fill_color]);
	printf("Border is %s\n", pt->show_border == YES ? "shown" : "not shown");
	printf("The border color is %s\n", colors[pt->border_color]);
	printf("The border style is %s\n", styles[pt->border_style]);
}
