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
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        int counter = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                if (__gcd(arr[0], arr[1]) < arr[0])
                    counter++;
            }
            else if (i == n - 1)
            {
                if (__gcd(arr[n - 1], arr[n - 2]) < arr[n - 1])
                    counter++;
            }
            else
            {
                int A = __gcd(arr[i], arr[i - 1]);
                int B = __gcd(arr[i], arr[i + 1]);
                int LCM = lcm(A, B);
                if (LCM < arr[i])
                    counter++;
            }
        }
        cout << counter << "\n";
    }

    return 0;
}