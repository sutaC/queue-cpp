#include "Queue.h"

struct QueueNode
{
    int value;
    QueueNode *next = nullptr;
};

Queue::Queue() : head(nullptr), tail(nullptr), length(0) {}

Queue::~Queue()
{
    while (this->length > 0)
    {
        this->dequeue();
    }
};

int Queue::getLength()
{
    return this->length;
}

void Queue::enqueue(int value)
{
    this->length++;
    QueueNode *node = new QueueNode();
    node->value = value;
    if (this->tail == nullptr)
    {
        this->head = this->tail = node;
        return;
    }
    this->tail->next = node;
    this->tail = node;
}

int Queue::dequeue()
{
    QueueNode *node = this->head;
    if (node == nullptr)
    {
        // NOT FOUND
        throw nullptr;
    }
    this->length--;
    this->head = node->next;
    if (this->head == nullptr)
    {
        this->tail = nullptr;
    }
    int value = node->value;
    delete node;
    return value;
}

int Queue::peek()
{
    if (head == nullptr)
    {
        // NOT FOUND
        throw nullptr;
    }
    return head->value;
}
