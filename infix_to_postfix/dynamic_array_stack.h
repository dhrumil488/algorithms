#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct dynamic_array_stack {
    int top;
    int capacity;
    char *array;
} dynamic_array_stack;

dynamic_array_stack* create_stack();
void push(dynamic_array_stack* stack, char data);
char pop(dynamic_array_stack* stack);
char top(dynamic_array_stack *stack);
void display_stack(dynamic_array_stack* stack);
bool is_stack_empty(dynamic_array_stack* stack);