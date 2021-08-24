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

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("Sorted: ");
    for (int i = 0; i < 20 ; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}