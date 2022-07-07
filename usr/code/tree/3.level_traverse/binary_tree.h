#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct BinTree_node {
        unsigned char data;
        struct BinTree_node *ltree, *rtree;
};

struct BinTree_node *create_bintree(void);
void eatline(void);
void pre_order(const struct BinTree_node *tree);
void in_order(const struct BinTree_node *tree);
void pos_order(const struct BinTree_node *tree);

#endif
