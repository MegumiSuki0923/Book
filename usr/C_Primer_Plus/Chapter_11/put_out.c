// puts() 自动加入换行
// puts() 参数放一个地址

#include <stdio.h>

#define DEF     "I am a #defined string"

int main(void)
{
        char str1[80] = "An array was initialize to me.";
        const char *str2 = "A pointer was initialize to me.";

        puts("I'm an argument to pute().");
        puts(DEF);
	puts(str1);
	puts(str2);

	puts(&str1[5]);
	puts(str2 + 4);

        return 0;
}
