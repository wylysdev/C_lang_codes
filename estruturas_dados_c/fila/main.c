#include <stdio.h>
#include <stdbool.h>

/* 
    ====== QUEUE ======
    ====== Operacoes ====== 
    Insert (FILA, ELEMENTO)
    e = Remove(FILA)
    IsEmpety(FILA)

 */

#define QUEUE_MAX 5

struct QUEUE
{
    int front, rear;
    int items[QUEUE_MAX];
};

typedef struct QUEUE queue_t;
q_insert(queue_t *q, int item)
{
    q->rear += 1;
    q->items[q->rear] = item;
}

int q_remove(queue_t *q)
{
    int aux;
}

bool q_is_empty(queue_t *q)
{
    return (q->rear) < (q->front);
}

int main()
{
    queue_t q;
    q.front = 0;
    q.rear = -1;
}