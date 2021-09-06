// Written by Sriram G IMT2018526 Circular Queue
#include <limits.h>
#include <stdio.h>
#include <math.h>

struct CQueue
{
    int front, back;
    int a[10];
}cq;

int isEmpty()
{
    return cq.front == -1;
}

void add(int x)
{
    if ((cq.front == 0 && cq.back == 9) || (cq.front == cq.back + 1))
    {
        printf("Queue Full\n");
        return;
    }
    if (cq.front == -1)
    {
        cq.back = 0;
        cq.front = 0;
    }
    else
    {
        if (cq.back == 9)
        {
            cq.back = 0;
        }
        else
        {
            cq.back++;
        }
    }
    cq.a[cq.back] = x;    
}

int rem()
{
    if (isEmpty())
    {
        printf("Empty Queue\n");
        return INT_MIN;
    }
    int r = cq.a[cq.front];
    if (cq.front == cq.back)
    {
        cq.back = -1;
        cq.front = -1;
    }

    else
    {
        if (cq.front == 9)
        {
            cq.front = 0;
        }
        else
        {
            cq.front++;
        }
    }
    return r;
}

void disp()
{
    if (isEmpty())
    {
        printf("Queue Empty\n");
        return;
    }
    printf("Queue Contents\n");
    int i = cq.front;
    int j = cq.back;
    if (i <= j)
    {
        while (i <= j)
        {
            printf("%d\n", cq.a[i++]);
        }
    }
    else
    {
        while (i <= 9)
        {
            printf("%d\n", cq.a[i++]);
        }
        i = 0;
        while (i <= j)
        {
            printf("%d\n", cq.a[i++]);
        }
    }
    printf("\n");
}

int main()
{
    cq.front = -1;
    cq.back = -1;
    int inp = 0;
    printf("Circular Queue\n1. Add\n2. Remove\n3. Display\n0. Exit\n");
    
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
