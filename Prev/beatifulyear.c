#include <stdio.h>
int main()
{
    int y,i;
    scanf("%d",&y);
    for (i=y+1; i<=y+200; i++)
    {
        if (i%10!=(i/10)%10 && (i/10)%10!=(i/100)%10 && (i/100)%10!=i/1000 && i%10!=(i/100)%10 && i%10!=i/1000 && (i/10)%10!=i/1000)
        {
            break;
        }
    }
    printf("%d%d%d%d",i/1000,(i/100)%10,(i/10)%10,i%10);
    return 0;
}
