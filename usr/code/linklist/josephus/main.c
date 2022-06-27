#include "linklist.h"
#include <stdio.h>

int main(void)
{
	int n, k, m;
	int i, j;
	struct node *loc, *pre, *q;

	printf("Please enter the number of person: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		create_list(i);

	print_linklist();

	printf("Please enter the number of start: ");
	scanf("%d", &k);


	// 现在让loc指针指向k
	loc = head;
	while(--k)
	{
		loc = loc->next;
	}

	printf("And now enter the interval: ");
	scanf("%d", &m);

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
		for(i = 0; i < n; i++)
		{
			pre = head;
			// 确定前驱点的位置
			for(j = 0; j < m-2; j++)
				pre = pre->next;
			// 确定q的位置
			for(j = 0; j < m-1; j++)
				q = q->next
		}
	}

	return 0;
}
