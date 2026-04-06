#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(3 * n), perm(3*n);

        for (int i = 0; i < 3*n; ++i) arr[i] = i + 1;  

        int i = 0;
        int l = 0;
        int r = arr.size() - 1;
        while (r > l)
        {
            perm[i] = arr[r];
            perm[i+1] = arr[r-1];
            perm[i+2] = arr[l];
            l++;
            r -= 2;
            i += 3;
        }
        
        for (int& x : perm) cout << x << " ";
        cout << "\n";
    }

    return 0;
}