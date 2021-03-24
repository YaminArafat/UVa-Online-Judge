#include <stdio.h>
int main()
{
    int N,M,i,j,y;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        scanf("%d", &M);

        if (M>=1 && M<=100)
        {
            for (y=0; y<=M-1; y++)
            {
                for (j=0; j<=M-1; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    return 0;

}
