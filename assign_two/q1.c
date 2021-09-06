// Written by Sriram G IMT2018526 FDstack
#include <limits.h>
#include <stdio.h>

struct FDStack
{
    int pointer;
    int a[10];
}st;

void push(int x)
{
    st.a[--st.pointer] = x; //dec and push
}

int pop()
{
    if (st.pointer == 10)
    {
        printf("Stack empty\n");
        return INT_MIN;
    }
    
    return st.a[st.pointer++]; //pop and inc
}

void disp()
{
    if (st.pointer == 10)
    {
        printf("Stack empty\n");
        return;
    }
    printf("Stack Contents\n");
    for (int i = st.pointer; i < 10; i++)
    {
        printf("%d\n", st.a[i]);
    }
    printf("\n");
}

int main()
{
    st.pointer = 10;
    int inp = 0;
    printf("FD STACK\n1. Push\n2. Pop\n3. Display\n0. Exit\n");
    
    do
    {
        printf("Your Input: ");    
        scanf("%d", &inp);
        if (inp == 1)
        {
            if (st.pointer == 0)
            {
                printf("Stack full\n");
                continue;
            }
            int x;
            printf("Element to push: ");
            scanf("%d", &x);
            push(x);
        }
        else if (inp == 2)
        {
            int p = pop();
            if (p > INT_MIN)
            {
                printf("Popped element: %d\n", p);
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