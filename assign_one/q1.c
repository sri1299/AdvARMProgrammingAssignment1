#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    int a;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("Largest number: %d\n", max);
    return 0;
}