#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define MAX	100

struct AMG_Graph
{
	int vex_num, edge_num;

	char Vex[MAX];
	int Edge[MAX][MAX];
};

struct AMG_Graph *create_AMG_graph(void);
void show_AMG_Graph(const struct AMG_Graph *graph);
int search_index(const struct AMG_Graph *graph, char ch);
void BFS_AMG(struct AMG_Graph *graph);

int main(void)
{
	struct AMG_Graph *ud_graph;

	ud_graph = create_AMG_graph();
	show_AMG_Graph(ud_graph);

	printf("Traverse the graph through BFS:\n");
	BFS_AMG(ud_graph);

	return 0;
}

struct AMG_Graph *create_AMG_graph(void)
{
	int i, j;
	char u, v;
	struct AMG_Graph *graph;

	graph = (struct AMG_Graph *)malloc(sizeof(struct AMG_Graph));

	printf("Please enter the number of vex: ");
	scanf("%d", &graph->vex_num);
	printf("Please enter the number of edge: ");
	scanf("%d", &graph->edge_num);

//	while(getchar() == '\n');
	while(getchar() != '\n');

	printf("Please enter the vex: ");
	for(i = 0; i < graph->vex_num; i++)
	{
		graph->Vex[i] = getchar();
		while(getchar() != '\n');
	}

	for(i = 0; i < graph->vex_num; i++)
	{
		for(j = 0; j < graph->vex_num; j++)
			graph->Edge[i][j] = 0;
	}

	printf("And now please enter the edge that connected between two vex:\n");
	while(graph->edge_num--)
	{
		printf("Enter the first vex: ");
		u = getchar();
		while(getchar() != '\n');
		printf("Enter the second vex: ");
		v = getchar();
		while(getchar() != '\n');

		i = search_index(graph, u);
		j = search_index(graph, v);

		if(i != -1 && j != -1)
			graph->Edge[i][j] = graph->Edge[j][i] = 1;
		else
		{
			printf("The vax you entered do not exist, please enter the right vex.\n");
			graph->edge_num++;
		}
		printf("-------------------------------------------------------------------------\n");
	}

	return graph;
}

void show_AMG_Graph(const struct AMG_Graph *graph)
{
	int i, j;

	printf("Show the vex:\n");
	for(i = 0; i < graph->vex_num; i++)
		printf("%c ", graph->Vex[i]);
	printf("\n");

	printf("Show the edge:\n");
	for(i = 0; i < graph->vex_num; i++)
	{
		for(j = 0; j < graph->vex_num; j++)
			printf("%5d", graph->Edge[i][j]);
		printf("\n");
	}
}

int search_index(const struct AMG_Graph *graph, char ch)
{
	int i;

	for(i = 0; i < graph->vex_num; i++)
	{
		if(ch == graph->Vex[i])
			return i;
	}

	return -1;
}

void BFS_AMG(struct AMG_Graph *graph)
{
	int visited[MAX] = {0};
	int u;
	int i;

	enqueue(0);
	printf("%c ", graph->Vex[0]);
	visited[0] = 1;

	while(!is_empty())
	{
		u = dequeue();
		// 两个条件 1.未被访问 2.有邻接点
		for(i = 0; i < graph->vex_num; i++)
		{
			if((visited[i] == 0) && (graph->Edge[u][i]))
			{
				enqueue(i);
				visited[i] = 1;
				printf("%c ", graph->Vex[i]);
			}
		}
	}
	printf("\n");
}
