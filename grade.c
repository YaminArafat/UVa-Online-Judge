#include <stdio.h>
int main()
{
    int n,i,marks;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&marks);
        if (marks>=80)
        {
            printf("Case %d: A+\n",i);
        }
        if (marks>=75 && marks<80)
        {
            printf("Case %d: A\n",i);
        }
        if (marks>=70 && marks<75)
        {
            printf("Case %d: A-\n",i);
        }
        if (marks>=65 && marks<70)
        {
            printf("Case %d: B+\n",i);
        }
        if (marks>=60 && marks<65)
        {
            printf("Case %d: B\n",i);
        }
        if (marks>=55 && marks<60)
        {
            printf("Case %d: B-\n",i);
        }
        if (marks>=50 && marks<55)
        {
            printf("Case %d: C\n",i);
        }
        if (marks>=45 && marks<50)
        {
            printf("Case %d: D\n",i);
        }
        if (marks>=0 && marks<45)
        {
            printf("Case %d: F\n",i);
        }
    }
    return 0;
}
