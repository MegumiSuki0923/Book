#include "binary_tree.h"
#include "queue.h"

struct BinTree_node *create_bintree(void)
{
        struct BinTree_node *tree = (struct BinTree_node*)malloc(sizeof(struct BinTree_node));
        unsigned char flag;

        // 你想在Tree中输入什么
        printf("Which element do you want to input?\n");
        tree->data = getchar();
        eatline();

        printf("Do you want to insert l_tree for %c, (Y/N)?\n", tree->data);
        flag = getchar();
        eatline();

        if(flag == 'Y')
                tree->ltree = create_bintree();
        else
            	tree->ltree = NULL;

        // 是否要创建右子树
        printf("Do you want to insert r_tree for %c, (Y/N)?\n", tree->data);
        flag = getchar();
        eatline();

        if(flag == 'Y')
                tree->rtree = create_bintree();
        else
                tree->rtree = NULL;

        return tree;
}

void eatline(void)
{
        while(getchar() != '\n')
                continue;
}

void pre_order(const struct BinTree_node *tree)
{
        if(tree)

        {
                printf("%c", tree->data);
                pre_order(tree->ltree);
                pre_order(tree->rtree);
        }
}

void in_order(const struct BinTree_node *tree)
{
        if(tree)
        {
                in_order(tree->ltree);
                printf("%c", tree->data);
                in_order(tree->rtree);
        }
}

void pos_order(const struct BinTree_node *tree)
{
        if(tree)
        {
                pos_order(tree->ltree);
                pos_order(tree->rtree);
                printf("%c", tree->data);
        }
}

// 层次遍历
void level_traverse(struct BinTree_node *tree)
{
        struct BinTree_node node;

        if(tree)
                enqueue(*tree);
        while(!is_empty())
        {
                if(tree->ltree)
                        enqueue(*tree->ltree);
                if(tree->rtree)
                        enqueue(*tree->rtree);
        }
        node = dequeue();
        printf("%c", node.data);
}
