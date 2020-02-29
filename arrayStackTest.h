#ifndef  ARRAYSTACKTEST
#define ARRAYSTACKTEST

struct st{
	int StackSize;
	int StackPeak;
	int *StackArray;
};
typedef struct st stack;
int pop(stack *s);
void push(int a, stack *s);
void printStack(stack *s);
stack *stack_create();

#endif // ! ARRAYSTACKTEST
