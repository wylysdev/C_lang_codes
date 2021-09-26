#include <stdio.h>
int queue[100]; // armazena os elementos da fila

int front, // front: ponteiro para o início da fila
    rear;  //  rear: ponteiro para o final da fila

bool is_Empty()
{
    return front == rear;
}

void insert(int x)
{
    int aux = alloc_node();
    if (rear == 100)
    {
        if (rear == 100 - 1)
            rear = 0;
        else
            (rear)++;

        if (rear == front)
        {

            exit(1);
        }
    }
    queue[rear] = x;
return;      
}

int remov()
{

    if (front == 100 - 1)
        front = 0;
    else
        (front)++;
    return (queue[front]);
}

int main()
{
    return 0;
}