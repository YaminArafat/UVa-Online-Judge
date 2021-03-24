#include <iostream>
//#include <cstdio>
//#include <math.h>

using namespace std;

 int main()
 {
     int start,diff,endx,sum=0,x;

     cin>>start>>diff>>endx;

     for (;start<=1000;start=start+diff)
     {
         sum=start+sum;
     }
     cout<<sum<<endl;
     return 0;
 }
