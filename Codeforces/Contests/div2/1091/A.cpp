#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // vector<int> arr(n);

        // for (int &x : arr)
            // cin >> x;

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        // int moves = accumulate(arr.begin(), arr.end(), 0);
        // IF MOVES % 2 == 0
        if (k * n % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}