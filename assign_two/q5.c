// Written by Sriram G IMT2018526 Queue
#include <limits.h>
#include <stdio.h>

struct Queue
{
    int front, back;
    int a[10];
}q;

int isEmpty()
{
    return q.front > q.back;
}

void add(int x)
{
    if (q.back == 9)
    {
        printf("Queue Full\n");
        return;
    }
    q.a[++q.back] = x;    
}

int rem()
{
    if (isEmpty())
    {
        printf("Queue Empty\n");
        return INT_MIN;
    }
    return q.a[q.front++];
}

void disp()
{
    if (isEmpty())
    {
        printf("Queue Empty\n");
        return;
    }
    printf("Queue Contents\n");
    for (int i = q.front; i <= q.back; i++)
    {
        printf("%d\n", q.a[i]);
    }
    printf("\n");
}

int main()
{
    q.front = 0;
    q.back = -1;
    int inp = 0;
    printf("Queue\n1. Add\n2. Remove\n3. Display\n0. Exit\n");
    
    do
    {
        
        printf("Your Input: ");    
        scanf("%d", &inp);

        if (inp == 1)
        {
            int x;
            printf("Element to add: ");
            scanf("%d", &x);
            add(x);
        }
        else if (inp == 2)
        {
            int p = rem();
            if (p > INT_MIN)
            {
                printf("Removed element: %d\n", p);
            }
        }
        else if (inp == 3)
        {
            disp();
        }
    }
    while(inp > 0);
    return 0;
}
