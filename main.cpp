#include <iostream>
#include "includes/Queue.h"

// ---

int main()
{
    Queue q = Queue();

    std::cout << "Len: " << q.getLength() << "\n";

    q.enqueue(2);
    q.enqueue(10);
    q.enqueue(22);

    std::cout << "Elem peek: " << q.peek() << "\n";

    std::cout << "Elem deq: " << q.dequeue() << "\n";

    q.dequeue();

    std::cout << "Elem peek: " << q.peek() << "\n";

    std::cout
        << "Final length: " << q.getLength() << "\n";

    return 0;
}