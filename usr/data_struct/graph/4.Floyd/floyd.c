
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX	100

struct AMG_Graph
{
	int vex_num, edge_num;

	char Vex[MAX];
	int Edge[MAX][MAX];
};

struct AMG_Graph *create_AMG_graph(void);
void Show_AMG_Graph_Distance_p(const struct AMG_Graph *graph);
int search_index(const struct AMG_Graph *graph, char ch);
void Floyd(const struct AMG_Graph *graph);

double dist[MAX][MAX];
int p[MAX][MAX];

int main(void)
{
	struct AMG_Graph *d_graph;

	d_graph = create_AMG_graph();
	Show_AMG_Graph_Distance_p(d_graph);

	Floyd(d_graph);
	printf("\nAfter Floyd:\n");
	Show_AMG_Graph_Distance_p(d_graph);

	return 0;
}

struct AMG_Graph *create_AMG_graph(void)
{
	int i, j;
	int l;
	char u, v;
	struct AMG_Graph *graph;

	graph = (struct AMG_Graph *)malloc(sizeof(struct AMG_Graph));

	printf("Please enter the number of vex: ");
	scanf("%d", &graph->vex_num);
	while(getchar() != '\n');
	printf("Please enter the number of edge: ");
	scanf("%d", &graph->edge_num);
	while(getchar() != '\n');

	printf("Please enter the vex:\n");
	for(i = 0; i < graph->vex_num; i++)
	{
		graph->Vex[i] = getchar();
		while(getchar() != '\n');
	}

	for(i = 0; i < graph->vex_num; i++)
	{
		for(j = 0; j < graph->vex_num; j++)
		{
			graph->Edge[i][j] = 0;

			// 初始化距离矩阵
			if(i == j)
				dist[i][j] = 0;
			else
				dist[i][j] = INFINITY;

			// 初始化前驱点矩阵
			p[i][j] = -1;
		}
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
		printf("Please enter the distance between %c and %c: ", u, v);
		scanf("%d", &l);
		while(getchar() != '\n');

		i = search_index(graph, u);
		j = search_index(graph, v);

		if(i != -1 && j != -1)
		{
			graph->Edge[i][j] = 1;
			dist[i][j] = l;
			p[i][j] = i;
		}
		else
		{
			printf("The vax you entered do not exist, please enter the right vex.\n");
			graph->edge_num++;
		}
		printf("-------------------------------------------------------------------------\n");
	}

	return graph;
}

void Show_AMG_Graph_Distance_p(const struct AMG_Graph *graph)
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
			printf("%3d", graph->Edge[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("Show the distance matices:\n");
	for(i = 0; i < graph->vex_num; i++)
	{
		for(j = 0; j < graph->vex_num; j++)
			printf("%3.0lf", dist[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("Show the pre point matices:\n");
	for(i = 0; i < graph->vex_num; i++)
	{
		for(j = 0; j < graph->vex_num; j++)
			printf("%3d", p[i][j]);
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

void Floyd(const struct AMG_Graph *graph)
{
	int k, i, j;

	// k是插入点
	for(k = 0; k < graph->vex_num; k++)
	{
		for(i = 0; i < graph->vex_num; i++)
		{
			for(j = 0; j < graph->vex_num; j++)
			{
				if(dist[i][j] > dist[i][k] + dist[k][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
					p[i][j] = p[k][j];
				}
			}
		}
	}
}
