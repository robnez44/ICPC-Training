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

        int greatest_gcd = -1;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (i == j)
                    continue;
                else
                {
                    if (__gcd(i, j) > greatest_gcd)
                        greatest_gcd = __gcd(i, j);
                }
            }
        }
        cout << greatest_gcd << "\n";
    }
    return 0;
}