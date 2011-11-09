/*
 * stack_item.h
 *
 */

#ifndef STACK_ITEM_H_
#define STACK_ITEM_H_

typedef struct StackItem {
		int* data;
		int step;
		int i;
		int j;
		int movedDisc;
        struct StackItem *next;
} StackItem;

#endif /* STACK_ITEM_H_ */
