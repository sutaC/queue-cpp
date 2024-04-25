#ifndef QUEUE_H
#define QUEUE_H

struct QueueNode;

class Queue
{
private:
    QueueNode *head;
    QueueNode *tail;
    int length;

public:
    Queue();
    int getLength();
    void enqueue(int value);
    int dequeue();
    int peek();
    ~Queue();
};

#endif