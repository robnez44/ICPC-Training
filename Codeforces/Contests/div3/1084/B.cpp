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
        vector<int> arr(n);
        for (int &i : arr)
            cin >> i;

        if (is_sorted(arr.begin(), arr.end()))
            cout << n << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}