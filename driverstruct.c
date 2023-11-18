#include <stdio.h>
#define MAX_SIZE 10

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *s) {
    s->top = -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
    } else {
        s->items[++(s->top)] = value;
    }
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1; // Error value, you might want to handle this differently
    } else {
        return s->items[(s->top)--];
    }
}

int main() {
    struct Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Popped item: %d\n", pop(&myStack));
    printf("Popped item: %d\n", pop(&myStack));
    printf("Popped item: %d\n", pop(&myStack));

    return 0;
}
