#include <stdio.h>

// 只能存储 80 个字节，留有一个来存放 \0
#define MAX 81

int main()
{
        char name[MAX];
        char *ptr;

        printf("Hi, what's your name?\n");
        
        // 接收字符串起始地址
        // 返回 name 的起始地址
        ptr = gets(name);
        printf("%s, Ah! %s.\n", name, ptr);

        return 0;
}
