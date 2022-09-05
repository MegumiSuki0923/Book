#include <stdio.h>

// 只能存储 80 个字节，留有一个来存放 \0
#define MAX     81

int main()
{
        char name[MAX];
        printf("Hi, what's your name?\n");
        // 接收字符串起始地址
        gets(name);
        printf("Nice name! Nice to meet you, %s.\n", name);

        return 0;
}
