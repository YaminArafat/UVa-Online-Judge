#include <stdio.h>
 int main()
 {
     int n,x;

     scanf("%d", &n);

     if (n==2 || n==4 || n==5 || n==6 || n==7)
     {
         while (n==2)
         {
             x=1;
             printf("%d",x);
             break;
         }
         while (n==4)
         {
             x=4;
             printf("%d",x);
             break;
         }
         while (n==3)
         {
             x=7;
             printf("%d",x);
             break;
         }
         while (n==5)
         {
             x=2;
             printf("%d\n",x);
             x=3;
             printf("%d\n",x);
             x=5;
             printf("%d\n",x);
             break;
         }
         while (n==6)
         {
             x=6;
             printf("%d\n",x);
             x=9;
             printf("%d\n",x);
             break;
         }
         while (n==7)
         {
             x=8;
             printf("%d",x);
             break;
         }
     }

     getch();
 }
