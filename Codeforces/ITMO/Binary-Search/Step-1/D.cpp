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
        if (arr[mid] < x)
            l = mid;
        else
            r = mid;
    }
    return l+1;
}

int closest_to_the_right(vi& arr, int x){
    int n = arr.size();
    int l = -1;
    int r = n;
    while (r > l+1)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <=  x)
            l = mid;
        else
            r = mid;
    }
    return r;
}

int main(){

    int n, k;
    cin >> n;

    vi arr(n);
    for (int& x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        
        int lower = closest_to_the_left(arr, l);
        int upper = closest_to_the_right(arr, r);

        cout << (upper - lower) << " ";
    }
    cout << "\n";

    return 0;
}