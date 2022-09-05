#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define MAX	100

struct AdjNode
{
	int index;
	struct AdjNode *next;
};

struct VexNode
{
	char ch;
	struct AdjNode *first;
};

struct ALG_Graph
{
	int vex_num, edge_num;
	struct VexNode Vex[MAX];
};

struct ALG_Graph *Create_ALG_Graph(void);
int search_index(const struct ALG_Graph *graph, char ch);
void Create_Adj_Node_List(struct ALG_Graph *graph, int i, int j);
void Show_ALG_Graph(const struct ALG_Graph *graph);
void BFS_ALG(struct ALG_Graph *graph);

int main(void)
{
	struct ALG_Graph *d_graph;
	d_graph = Create_ALG_Graph();
	Show_ALG_Graph(d_graph);

	printf("Traverse the graph through BFS:\n");
	BFS_ALG(d_graph);

	return 0;
}

struct ALG_Graph *Create_ALG_Graph(void)
{
	struct ALG_Graph *graph;
        int i, j;
	char u, v;

        graph = (struct ALG_Graph *)malloc(sizeof(struct ALG_Graph));

        printf("Please enter the number of vex: ");
	scanf("%d", &graph->vex_num);
        printf("Please enter the number of edge: ");
        scanf("%d", &graph->edge_num);
        while(getchar() != '\n');

        printf("Please enter the information of vex:\n");
        for(i = 0; i < graph->vex_num; i++)
        {
                graph->Vex[i].ch = getchar();
                while(getchar() != '\n');
                graph->Vex[i].first = NULL;
       	}

	// 现在填充邻接点表
	while(graph->edge_num--)
	{
		printf("Please enter two node that have connection:\n");
		u = getchar();
		while(getchar() != '\n');
		v = getchar();
		while(getchar() != '\n');

		// 注意到，这里的i是出发点，j是接收点	即j是临界点表的最后一个元素
		i = search_index(graph, u);
		j = search_index(graph, v);

		// 如果可以在节点表找到的话，现在就把邻接点里的数据填充一下
		if(i != -1 && j != -1)
			// 这里比较难，为什么要传入这三个参数？
			Create_Adj_Node_List(graph, i, j);
		else
		{
			printf("The character you entered is incorrect, please try again!\n");
			graph->edge_num++;
		}
	}

	return graph;
}

int search_index(const struct ALG_Graph *graph, char ch)
{
	int i;

	for(i = 0; i < graph->vex_num; i++)
	{
		if(ch == graph->Vex[i].ch)
			return i;
	}

	return -1;
}

void Create_Adj_Node_List(struct ALG_Graph *graph, int i, int j)
{
	struct AdjNode *s = (struct AdjNode *)malloc(sizeof(struct AdjNode));
	s->index = j;
	s->next = graph->Vex[i].first;
	graph->Vex[i].first = s;
}

void Show_ALG_Graph(const struct ALG_Graph *graph)
{
	int i;
	struct AdjNode *s;

	printf("Now show the vex:\n");
	for(i = 0; i < graph->vex_num; i++)
		printf("%c ", graph->Vex[i].ch);
	printf("\n");

	printf("Now show the relationship:\n");
	for(i = 0; i < graph->vex_num; i++)
	{
		s = graph->Vex[i].first;
		printf("%c: ", graph->Vex[i].ch);
		while(s)
		{
			printf("%d ", s->index);
			s = s->next;
		}
		printf("\n");
	}
}

void BFS_ALG(struct ALG_Graph *graph)
{
	// 在用变量初始化数组时，不能进行初始化赋值，所以要用一个循环置0
	int visited[graph->vex_num];
	int i;
	struct AdjNode *p;
	int n;

	for(i = 0; i < graph->vex_num; i++)
		visited[i] = 0;


	enqueue(0);
	visited[0] = 1;
	printf("%c ", graph->Vex[0].ch);

	while(!is_empty())
	{
		i = dequeue();
		p = graph->Vex[i].first;

		while(p)
		{
			n = p->index;
			if(visited[n] == 0)
			{
				enqueue(n);
				visited[n] = 1;
				printf("%c ", graph->Vex[n].ch);
			}
			p = p->next;
		}

	}
	printf("\n");
}
