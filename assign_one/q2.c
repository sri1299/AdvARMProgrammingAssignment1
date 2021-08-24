#include <stdio.h>
#include <limits.h>
int main()
{
    int a[15];
    for (int i = 0; i < 15; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", a + i);    
    }
    int max = INT_MIN;
    for (int i = 0; i < 15; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Largest number: %d\n", max);
    return 0;
}