#include <stdio.h>

int main(void)
{
        char * mesg = "Don't be a fool!";
        char * copy;
        copy = mesg;

        printf("%s\n", copy);

        // value = % p 打印的是字符 D 的地址
        printf("mesg = %s, &mesg = %p, value = %p.\n", mesg, &mesg, mesg);
        printf("copy = %s, &copy = %p, value = %p.\n", copy, &copy, copy);

        return 0;
}
