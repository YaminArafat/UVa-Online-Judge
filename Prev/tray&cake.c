#include <stdio.h>
int main()
{
    int c_radius,rec_len,rec_wid,n,i,c_width;
    //float py=3.1416;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &c_radius, &rec_len, &rec_wid);

        c_width=2*c_radius;

        if (c_width<=rec_len && c_width<=rec_wid)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;

}
