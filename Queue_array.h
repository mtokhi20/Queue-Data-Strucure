#define Queuentry int;
#define MAXQUEUE 1000


typedef struct Queue1{
    int Front;
    int rear;
    int Size;
    Queuentry entry[MAXQUEUE];
}Queue;

void CreateQueue(Queue *pq);
void Append(Queuentry e ,Queue *pq);
void Serve (Queuentry *pe , Queue *pq);
int  QueueEmpty(Queue *pq);
int  QueueFull (Queue *pq);
int  QueueSize(Queue *pq);
void Clearqueue(Queue *pq);
