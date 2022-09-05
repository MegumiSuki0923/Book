#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>

#define SIZE    100

extern int queue[SIZE];

void enqueue(int c);
int dequeue(void);
int is_empty(void);
int is_full(void);

#endif
