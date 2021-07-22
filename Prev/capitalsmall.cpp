#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char x;

    cin>>x;

    if (x>='a'  &&  x<='z')
    {
        cout<<x<<" is small letter."<<endl;
    }

    else if (x>='A'  &&  x<='Z')
    {
        cout<<x<<" is capital letter."<<endl;
    }

    return 0;
}
