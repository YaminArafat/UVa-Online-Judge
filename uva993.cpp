#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, size, sum = 0;
    cin >> n >> size;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int x = sum / n;
    int dif = 0;

    for(int i = 0; i < n; i++){
        int d;
        if(x >= arr[i]){
            d = x - arr[i];
        }
        else{
            d = arr[i] - x;
        }

        if(i = 0){
            dif = d;
        }
        else{
            if(d < dif){
                dif = d;
            }
        }
    }


    return 0;
}
