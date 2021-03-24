#include <iostream>
using namespace std;

 int main()
 {
     int n,x;

     cin>>n;

     if (n==2 || n==3 || n==4 || n==5 || n==6 || n==7)
     {
         while (n==2)
         {
             x=1;
             cout<<x;
             break;
         }
         while (n==4)
         {
             x=4;
             cout<<x;
             break;
         }
         while (n==3)
         {
             x=7;
             cout<<x;
             break;
         }
         while (n==5)
         {
             x=2;
             cout<<x<<endl;
             x=3;
             cout<<x<<endl;
             x=5;
             cout<<x<<endl;
             break;
         }
         while (n==6)
         {
             x=5;
             cout<<x<<endl;
             x=9;
             cout<<x<<endl;
             break;
         }
         while (n==7)
         {
             x=8;
             cout<<x;
             break;
         }
     }

     return 0;
 }
