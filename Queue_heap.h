#include <stdio.h>
#include <stdlib.h>
#define Queuentry int
typedef struct DoubleNode {
       Queuentry data;
       struct DoubleNode * next ;
       struct DoubleNode * prev ;
}doublyNode;
typedef struct Queuenode{
  Queuentry entry;
  struct Queuenode *next;
}QueueNode;

typedef struct Queue1{
    QueueNode *Front;
    QueueNode *rear;
    // doubly queue
    int Size;
}Queue;
// doubly queue
typedef struct doublequeue{
  doublyNode * front ;
  doublyNode * rear;
  int size;
}DoubleQueue;


void CreateQueue(Queue *pq);
void Append(Queuentry e ,Queue *pq);
void Serve (Queuentry *pe , Queue *pq);
int  QueueEmpty(Queue *pq);
int  QueueFull (Queue *pq);
int  QueueSize(Queue *pq);
void Clearqueue(Queue *pq);
//push in DQueue
void Push (Queuentry data , DoubleQueue * pq );

//swap in doubly queue
void swap_queue (DoubleQueue * pq ,doublyNode * node1 ,doublyNode * node2 );
