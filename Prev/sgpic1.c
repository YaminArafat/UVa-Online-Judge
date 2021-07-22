#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    for ( ;scanf("%d %d", &a, &b)==2; )
    {
        printf("%d %d\n", a, b);
    }

    return 0;
}
