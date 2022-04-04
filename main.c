
#include "Queue_heap.h"


int main(void)
{
    Queue q;
    CreateQueue (&q);
    Append (5,&q);
    Append (6,&q);
    Append (11,&q);
    printf("Queue elment %d" ,q.rear->entry);
    Push(20 , & q);
    return 0;
}
