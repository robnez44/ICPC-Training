#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int closest_to_the_left(vi& arr, int x){
    int n = arr.size();
    int l = -1;
    int r = n;
    while (r > l+1)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <= x)
            l = mid;
        else
            r = mid;
    }
    return l+1;
}
    
int main(){

    int n, k, x;
    cin >> n >> k;

    vi arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    while (k--)
    {
        cin >> x;
        int left = closest_to_the_left(arr, x);
        cout << left << '\n';
    }

    return 0;
}