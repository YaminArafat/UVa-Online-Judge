#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int func(int data,int count)
{
    while(data!=1)
    {
        if(data%2==0)
        {
            data/=2;
            count++;
        }
        else
        {
            data=(3*data)+1;
            count++;
        }
    }
    return count;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        int mx=0;
        if((6171>=a&&6171<=b)||(6171<=a&&6171>=b))
        {
            printf("%d %d %d\n",a,b,262);
        }
        else if((3711>=a&&3711<=b)||(3711<=a&&3711>=b))
        {
            printf("%d %d %d\n",a,b,238);
        }
        else if((2919>=a&&2919<=b)||(2919<=a&&2919>=b))
        {
            printf("%d %d %d\n",a,b,217);
        }
        else if((2463>=a&&2463<=b)||(2463<=a&&2463>=b))
        {
            printf("%d %d %d\n",a,b,209);
        }
        else if((2223>=a&&2223<=b)||(2223<=a&&2223>=b))
        {
            printf("%d %d %d\n",a,b,183);
        }
        else if((871>=a&&871<=b)||(871<=a&&871>=b))
        {
            printf("%d %d %d\n",a,b,179);
        }
        else if((1161>=a&&1161<=b)||(1161<=a&&1161>=b))
        {
            printf("%d %d %d\n",a,b,182);
        }
        else if((703>=a&&703<=b)||(703<=a&&703>=b))
        {
            printf("%d %d %d\n",a,b,171);
        }
        else if((649>=a&&649<=b)||(649<=a&&649>=b))
        {
            printf("%d %d %d\n",a,b,145);
        }
        else if((327>=a&&327<=b)||(327<=a&&327>=b))
        {
            printf("%d %d %d\n",a,b,144);
        }
        else if((313>=a&&313<=b)||(313<=a&&313>=b))
        {
            printf("%d %d %d\n",a,b,131);
        }
        else if((231>=a&&231<=b)||(231<=a&&231>=b))
        {
            printf("%d %d %d\n",a,b,128);
        }
        else if((171>=a&&3171<=b)||(171<=a&&171>=b))
        {
            printf("%d %d %d\n",a,b,125);
        }
        else if((129>=a&&129<=b)||(129<=a&&129>=b))
        {
            printf("%d %d %d\n",a,b,122);
        }
        else if((73>=a&&73<=b)||(73<=a&&73>=b))
        {
            printf("%d %d %d\n",a,b,116);
        }
        else if((27>=a&&27<=b)||(27<=a&&27>=b))
        {
            printf("%d %d %d\n",a,b,112);
        }
        else if((97>=a&&97<=b)||(97<=a&&97>=b))
        {
            printf("%d %d %d\n",a,b,119);
        }
        else if((34>=a&&34<=b)||(34<=a&&34>=b))
        {
            printf("%d %d %d\n",a,b,113);
        }
        else if((25>=a&&25<=b)||(25<=a&&25>=b))
        {
            printf("%d %d %d\n",a,b,24);
        }
        else if((18>=a&&18<=b)||(18<=a&&18>=b))
        {
            printf("%d %d %d\n",a,b,21);
        }
        else if((9>=a&&9<=b)||(9<=a&&9>=b))
        {
            printf("%d %d %d\n",a,b,20);
        }
        else if((7>=a&&7<=b)||(7<=a&&7>=b))
        {
            printf("%d %d %d\n",a,b,17);
        }
        else if((6>=a&&6<=b)||(6<=a&&6>=b))
        {
            printf("%d %d %d\n",a,b,9);
        }
        else if((5>=a&&5<=b)||(5<=a&&5>=b))
        {
            printf("%d %d %d\n",a,b,8);
        }
        else if((2>=a&&2<=b)||(2<=a&&2>=b))
        {
            printf("%d %d %d\n",a,b,2);
        }
        else if((1>=a&&1<=b)||(1<=a&&1>=b))
        {
            printf("%d %d %d\n",a,b,1);
        }
        else if(b>a)
        {
            for(int i=a; i<=b; i++)
            {
                int count=1;
                if(func(i,count)>mx)
                {
                    mx=func(i,count);
                }
            }
        }
        else
        {
            for(int i=b; i<=a; i++)
            {
                int count=1;
                if(func(i,count)>mx)
                {
                    mx=func(i,count);
                }
            }
        }

    }
    return 0;
}



/*
formula
int mx=0;
        if(b>a)
        {
            for(int i=a; i<=b; i++)
            {
                int count=1;
                if(func(i,count)>mx)
                {
                    mx=func(i,count);
                }
            }
        }
        else
        {
            for(int i=b; i<=a; i++)
            {
                int count=1;
                if(func(i,count)>mx)
                {
                    mx=func(i,count);
                }
            }
        }*/
