#include <stdio.h>
#include <stdlib.h>


// do not use post increment either use pre incremet or use +1 simply

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

void printQueue(struct circularQueue *q)
{
    int i = q->f+1;
    // printf("%d ",i);
    i = 1;
    while (i < q->r + 1)
    {
        printf("%d ", q->arr[i]);
        i++;
    }
    printf("\n");
}

int isFull(struct circularQueue *q)
{
    if ((q->r+1) % (q->size) == q->f)
    { // r ka jo next index hai agr us pr front pointer hai iska mtlb q full ho chuki hai
        return 1;
    }
    else
    {
        return 0;
    }
}

void enque(struct circularQueue *q, int val)
{   
    if (!isFull(q))
    {
        q->r = (q->r+1) % (q->size); // conectp of circular increment jab mera r 9 par chala jayega toh uske baad vo 10 par naa jaa kr 0 par jaaye uske liye
        q->arr[q->r] = val;
    }
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void deque(struct circularQueue *q)
{
    if (!isEmpty(q))
    {
        q->f = (q->f+1) % (q->size);
        q->arr[q->f] = 0;
    }
}

int main()
{
    struct circularQueue *q;
    q = (struct circularQueue*)malloc(sizeof(struct circularQueue));
    q->size = 10;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enque(q, 10);
    enque(q, 20);
    enque(q, 30);
    enque(q, 40);
    enque(q, 10);
    enque(q, 20);
    enque(q, 30);
    enque(q, 40);
    

    printQueue(q);

    return 0;
}