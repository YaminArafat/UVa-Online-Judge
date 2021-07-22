#include <stdio.h>
int main()
{
    int rooms,living,fr_spc,i,k=0;
    scanf("%d",&rooms);
    for (i=1; i<=rooms; i++)
    {
        scanf("%d %d",&living,&fr_spc);
        if (fr_spc-living>=2)
        {
            k++;
        }
    }
    printf("%d\n",k);

    return 0;
}
