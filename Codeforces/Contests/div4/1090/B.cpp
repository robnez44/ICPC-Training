#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> arr(7);
        for (int &x : arr)
            cin >> x;

        sort(arr.begin(), arr.end());

        int sum = 0;
        for (int i = 0; i < 6; ++i)
        {
            arr[i] = -arr[i];
            sum += arr[i];
        }

        cout << sum + arr[6] << "\n";
    }

    return 0;
}