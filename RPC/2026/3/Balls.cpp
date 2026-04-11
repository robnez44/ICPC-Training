#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll p, q;
    cin >> p >> q;

    for (ll r = 1; r <= 1e6; ++r)
    {
        ll a = p;
        ll b = p * (2*r - 1) - 2*r*q;
        ll c = p * r * (r - 1);

        ll D = b*b - 4*a*c;

        if (D < 0) continue;

        ll raiz = (ll)sqrtl((long double)D);

        while (raiz * raiz > D) raiz--;
        while ((raiz+1)*(raiz+1) <= D) raiz++;

        if (raiz * raiz != D) continue;

        if ((-b + raiz) % (2*a) != 0) continue;

        ll g = (-b + raiz) / (2*a);

        if (g >= r && g > 0)
        {
            cout << r << " " << g << "\n";
            return 0;
        }
    }

    cout << "impossible\n";
    return 0;
}