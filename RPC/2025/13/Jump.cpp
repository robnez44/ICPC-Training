#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    int a = arr[0]/3;
    int b = arr[1] - (2*a);
    int c = arr[n-1]/3;

    cout << a << " " << b << " " << c << "\n";

    return 0;
}