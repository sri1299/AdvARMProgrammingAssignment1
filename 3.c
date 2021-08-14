#include <stdio.h>
#include <limits.h>
int main()
{
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", a + i);    
    }
    int ecount = 0;
    for (int i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)
        {
            ecount++;
        }
    }
    printf("Number of even numbers: %d\n", ecount);

    return 0;
}