#include <stdio.h>
int main()
{
    int v,t,mul;

        while (scanf("%d %d", &v, &t)==2)
        if (v>=-100 &&v<=100 && t>=0 && t<=200)
        {
            mul=(2*t)*v;
            printf("%d\n",mul);
        }
    return 0;
}
