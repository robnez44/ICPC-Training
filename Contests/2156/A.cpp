#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        double m1 = 0, m2 = 0;
        while (n > 2)
        {
            if (n % 3 == 2)
            {
                m1 += n / 3;
                m2 += ceil(n / 3.0);
                n =     ceil(n / 3.0);
            }
            else if (n % 3 == 1)
            {
                m1 += n/3;
                m2 += n/3;
                n = ceil(n/3.0);
            }
            else
            {
                m1 += n/3;
                m2 += n/3;
                n /= 3;
            } 
        }
        cout << m1 << "\n";
    }

    return 0;
}