#include "dynamic_array_stack.h"

#define no_ops 4

bool is_precedence_higher(char ops[], int n, char op1, char op2) {
    int index1 = -1, index2 = -1, i;
    for(i=0;i<n;i++) {
        if(ops[i] == op1) {
            index1 = i;
        }
        if(ops[i] == op2) {
            index2 = i;
        }
    }
    if(index1 >= index2) {
        return true;
    } else {
        return false;
    }
}

//int get_index()

bool is_operator(char ops[], int n, char op) {
    int i;
    for(i=0;i<n;i++) {
        if(ops[i] == op) {
            return true;
        }
    }
    return false;
}

int main() {
    int exp_len;
    char operators[4] = {'-', '+', '*', '/'};
    dynamic_array_stack *stack;
    stack = create_stack();
    printf("Please enter the length of expression:");
    scanf("%d", &exp_len);
    char expression[exp_len];
    int i;
    for(i=0;i<exp_len;i++) {
        printf("Enter exp element %d:", i);
        scanf(" %c", &expression[i]);
    }

    for(i=0;i<exp_len;i++) {
        char x = expression[i];
        if(is_operator(operators, no_ops, x) == true) {
            if(is_stack_empty(stack) == false) {
                while(is_precedence_higher(operators, no_ops, top(stack), x) == true) {
                    printf("%c ", pop(stack));
                }
            }
            
            push(stack, x);
        } else {
            printf("%c ", x);
        }
    }

    while(is_stack_empty(stack) == false) {
        printf("%c ", pop(stack));
    }   

    return 0;
}