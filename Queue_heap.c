#include "Queue_heap.h"

void CreateQueue(Queue *eq){
  eq->Front=NULL;
  eq->rear =NULL;
  eq->Size=0;
}
void Append(Queuentry e ,Queue *pq){
    QueueNode *pn =(QueueNode*)malloc(sizeof(QueueNode));
    pn ->next =NULL;
    pn -> entry =e;
    if(!pq->rear)
        pq->Front=pn;
    else
        pq->rear->next=pn;
    pq->rear=pn;
    pq->Size++;
}
void Serve(Queuentry *pe , Queue *pq){
   QueueNode *pn = pq->Front;
   *pe =pn ->entry;
   pq ->Front =pn->next;
   free(pn);
   if(!pq->Front)
        pq->rear=NULL;
   pq ->Size--;
}
int  QueueEmpty(Queue *pq){
   return !pq->Front;
}
int  QueueFull (Queue *pq){
  return 0;
}
int  QueueSize(Queue *pq){return pq->Size;}
void Clearqueue(Queue *pq)
{
    while (pq->Front){
        pq->rear= pq->Front->next;
        free(pq->Front);
        pq->Front=pq->rear;
    }
    pq->Size=0;

}
//push in DQueue
void Push (Queuentry data , DoubleQueue * pq ){
         doublyNode * dno = (doublyNode * ) malloc(sizeof (doublyNode));
         dno->next =NULL;
         if(pq->front =NULL)
         {
             pq->front = dno;
         }
         else
            {
             pq->rear ->next=dno;
            }
          pq->rear= dno;
         dno->data=data;
         pq->size ++;
}

//swap in doubly queue
void swap_queue (DoubleQueue * pq ,doublyNode * node1 ,doublyNode * node2 );
