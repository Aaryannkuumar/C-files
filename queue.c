#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initializeQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full: Unable to enqueue %d.\n", value);
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->arr[queue->rear] = value;
}

int dequeue(Queue *queue) {
    int value;

    if (isEmpty(queue)) {
        printf("Queue is empty: Unable to dequeue.\n");
        return -1; // Return a sentinel value for an empty queue
    }

    value = queue->arr[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return value;
}

int main() {
    Queue queue;
    initializeQueue(&queue);

    // Example usage
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Dequeue elements: ");
    while (!isEmpty(&queue)) {
        printf("%d ", dequeue(&queue));
    }
    printf("\n");

    return 0;
}
