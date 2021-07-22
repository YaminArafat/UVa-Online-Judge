#include <stdio.h>
int main()
{
    int n,i,h,m,s,h1,m1,s1,d,t_h,t_m,t_s,total_t,final;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d",&h,&m,&s);
        scanf("%d %d %d",&h1,&m1,&s1);
        scanf("%d",&d);
        if (abs(h-h1)<=2 || abs(h1-h)<=2)
        {
            if (h>12 && s1>s && m1>m)
            {
                h=h-12;
                t_h=abs(12-h+h1);
                t_m=abs(m1-m);
                t_s=abs(s1-s);
                total_t=t_h*60*60+t_m*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h>12 && s>s1 && m>m1)
            {
                h=h-12;
                t_h=abs(12-h+h1);
                t_m=60-abs(m-m1);
                t_s=60-abs(s-s1);
                total_t=(t_h-1)*60*60+(t_m-1)*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h>12 && s<s1 && m>m1)
            {
                h=h-12;
                t_h=abs(12-h+h1);
                t_m=60-abs(m-m1);
                t_s=abs(s1-s);
                total_t=(t_h-1)*60*60+t_m*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h>12 && s>s1 && m<m1)
            {
                h=h-12;
                t_h=abs(12-h+h1);
                t_m=abs(m1-m);
                t_s=60-abs(s-s1);
                total_t=t_h*60*60+(t_m-1)*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h<=12 && s1>s && m1>m)
            {
                t_h=abs(h-h1);
                t_m=abs(m1-m);
                t_s=abs(s1-s);
                total_t=t_h*60*60+t_m*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h<=12 && s>s1 && m>m1)
            {
                t_h=abs(h-h1);
                t_m=60-abs(m-m1);
                t_s=60-abs(s-s1);
                total_t=(t_h-1)*60*60+(t_m-1)*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h<=12 && s<s1 && m>m1)
            {
                t_h=abs(h-h1);
                t_m=60-abs(m-m1);
                t_s=abs(s1-s);
                total_t=(t_h-1)*60*60+t_m*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h<=12 && s>s1 && m<m1)
            {
                t_h=abs(h-h1);
                t_m=abs(m1-m);
                t_s=60-abs(s-s1);
                total_t=t_h*60*60+(t_m-1)*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
            else if (h>h1)
            {
                t_h=abs(h-h1);
                t_m=abs(m-m1);
                t_s=abs(s-s1);
                total_t=t_h*60*60+t_m*60+t_s;
                final=total_t*d;
                printf("%d\n",final);
            }
        }
    }
    return 0;
}
