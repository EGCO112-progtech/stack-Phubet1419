
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char value);
  NodePtr new_node = (NodePtr)malloc(sizeof(Node));
  if (new_node) {
    new_node->data = value;
    new_node->nextPtr = top;
    s->top=new_node;
    s->size++;
char pop(StackPtr s);
    NodePtr t=s->top
    if(s->size>0){
    int value=t->data;
    s->top=t->NextPtr;
      s->size--;
      free(t);
      return value;
      }
    printf("Empty Stack");
    return 0;
    }
void pop_all(StackPtr s);
  while(){
    printf("%d",);
  }
}
#endif
