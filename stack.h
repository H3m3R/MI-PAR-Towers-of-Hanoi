/*
 * stack.h
 *
 */

#ifndef STACK_H_
#define STACK_H_

#include "stack_item.h"

typedef struct {
	StackItem *top;
	int num;
} Stack;

Stack * initializeStack();

void push(int* data, int step, int movedDisc);

int* top(int* step, int* i, int* j, int* movedDisc);

void pop();

void setState(int _i, int _j);

int isStackEmpty();

void freeStack();

void setReturning();

#endif /* STACK_H_ */
