
/* Developer by Neşet Aydın
*the library developed for test of array stack. 
*You can create (with stack_create(); function) your stacks 
*and add (with push(int a, stack *s); function) a variables in stack 
*and eject(with pop(stack *s); funtion) variables in stack
*and you can print on console; peak and size.
for use;
stack *s1 = stack_create(); //Create a stack
push(10, s1); //Add a Value( at here; 10) stack 
pop(s1); //Eject the peak variable at stack
*/

#include "stdio.h"
#include "stdlib.h"
#include "arrayStackTest.h"

int pop(stack *s) {
	if (s->StackArray == NULL) {
		printf("Array is empty.");
		return -1;
	}
	if (s->StackPeak <= (s->StackSize /4)){
		int *StackArray2 = (int*)malloc(sizeof(int)*s->StackSize / 2);
		for (int i = 0; i < s->StackPeak; i++) {
			StackArray2[i] = s->StackArray[i];
		}
		free(s->StackArray);
		s->StackArray = StackArray2;
		s->StackSize /= 2;
	}
		return s->StackArray[--s->StackPeak];
}
void push(int a, stack *s) {
	if (s->StackArray ==NULL) {
		s->StackArray = (int*)malloc(sizeof(int) * 2);
	}
	if (s->StackPeak >= s->StackSize -1) {
		int *StackArray2 =(int*)malloc(sizeof(int)*s->StackSize *2);
		for (int i = 0; i < s->StackSize; i++) {
			StackArray2[i] = s->StackArray[i];
		}
		free(s->StackArray);
		s->StackArray = StackArray2;
		s->StackSize *= 2;
	}
	s->StackArray[s->StackPeak++] = a;
}
void printStack(stack *s) {

	printf("size; %d\n", s->StackSize);
	printf("peak; %d\n", s->StackPeak);
	for (int i = 0; i < s->StackPeak; i++) {
		printf("%d\n", s->StackArray[i]);
	}
}
stack *stack_create() {
	stack *s = (stack *)malloc(sizeof(stack));
	s->StackSize =2;
	s->StackPeak =0;
	s->StackArray =NULL;
	return s;
}


