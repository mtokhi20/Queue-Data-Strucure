#include "Queue_array.h"

void CreateQueue(Queue *pq)
{
    pq->Front=0;
    pq->rear=-1;
    pq->Size=0;
}
void Append(Queuentry e ,Queue *pq){
    if (pq->rear==MAXQUEUE-1)
        pq->rear=0;
    else
        pq->rear++;
}
void Serve (Queuentry *pe , Queue *pq){
  *pe = pq->entry[pq->Front];

  pq->Front-(pq->Front+1)%MAXQUEUE;
  pq->size--;
}
int  QueueEmpty(Queue *pq){
return !pq->Size;
}
int  QueueFull (Queue *pq){return (pq->Size==MAXQUEUE)}
int  QueueSize(Queue *pq){return pq->size;}
void Clearqueue(Queue *pq)
{
    pq->Front=0;
    pq->rear=-1;
    pq->Size=0;
}


