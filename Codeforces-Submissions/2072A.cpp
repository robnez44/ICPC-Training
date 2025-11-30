#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, k, p;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        int res = 0, sumR = 0;

        cin >> n >> k >> p;

        if (n * p < abs(k))
        {
            cout << "-1" << "\n";
        }
        else
        {

            if (abs(k) % abs(p) != 0)
            {
                int res = p - (abs(k) % abs(p));
                int sumR = res + abs(k);
                cout << sumR / p << "\n";
            }
            else
            {
                cout << abs(k / p) << "\n";
            }
        }
    }

    return 0;
}