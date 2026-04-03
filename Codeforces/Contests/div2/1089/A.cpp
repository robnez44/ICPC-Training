#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi arr(n);
        for (int i = 0; i < n; ++i) arr[i] = i+1;

        sort(arr.begin(), arr.end(), greater<int>());
        
        for (int i = 0; i < n; ++i) cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}