#include <bits/stdc++.h>
using namespace std;

int mcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{

    int n, contador = 0;
    int num = 1, den = 1, m;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int g = mcd(nums[0], nums[1]);

    for (int i = 1; i <= n; ++i)
        num *= i;

    if (n == 2)
    {
        cout << "YES\n";
    }
    else
    {
        for (int i = 1; i <= n - 2; ++i)
            den *= i;
            
        m = num / (2 * den);

        for (int i = 0; i < n - 1; ++i)
        {
            for (int k = n - 1; k > i; --k)
            {
                if (mcd(nums[i], nums[k]) == g)
                {
                    contador++;
                }
            }
        }

        if (contador == m)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
