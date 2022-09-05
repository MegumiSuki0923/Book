#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k, m;
	int i, j;
	struct node *loc, *p;
	int tag = 1;

	printf("Please enter the number of person: ");
	scanf("%d", &n);
	printf("Please enter the number of start: ");
	scanf("%d", &k);
	printf("And now enter the interval: ");
	scanf("%d", &m);

	// 创建链表
	for(i = 1; i <= n; i++)
		create_list(i);
	print_linklist();

	// loc指针指向开始的位置
	loc = head;
	for(i = 0; i < k-1; i++)
		loc = loc->next;
	// printf("Now loc->elem = %d\n", loc->elem);

	if(m == 1)
	{
		for(i = 0; i < n; i++)
		{
			printf("%3d", loc->elem);
			loc = loc->next;
		}
		putchar('\n');
	}
	else
	{
		p = head;
		for(i = 0; i < n; i++)
		{
			// 更新前缀点的位置
			if(tag == 1)
			{
				for(j = 0; j < k - 1; j++)
					p = p->next;
				tag = 0;
			}
			else
			{
				for(j = 0; j < m - 2; j++)
					p = p->next;
				// 更新loc的位置
				loc = p->next;
				printf("%3d", loc->elem);
				p->next = p->next->next;
				p = p->next;
				free(loc);
			}
		}
		printf("%3d", p->elem);
	}

	return 0;
}
