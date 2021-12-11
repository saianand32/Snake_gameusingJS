#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    int *p;
    int i;

    p = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", *(p + i));
    }

    return 0;
}