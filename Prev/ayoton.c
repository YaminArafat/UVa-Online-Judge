#include <stdio.h>

int main()
{

    int length,height,width,i,vol[100],n;

    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d",&length,&height,&width);
        vol[i]=length*height*width;
        if ((length>=1 && length<=100) && (height>=1 && height<=100) && (width>=1 && width<=100))
    {
        printf("%d\n",vol[i]);
    }
    }
    return 0;
}

