#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9+7;

ll modexp(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1) 
            res = (res * base) % mod;

        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

ll inv(ll a) {
    return modexp(a, MOD-2, MOD);
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll half = n/2;
        ll halfCeiling = (n+1) / 2;

        ll x3 = half % MOD;
        x3 = (x3 * (half - 1)) % MOD;
        x3 = (x3 * (half - 2)) % MOD;
        x3 = (x3 * inv(6)) % MOD;

        ll x2 = halfCeiling % MOD;
        x2 = (x2 * (halfCeiling - 1)) % MOD;
        x2 = (x2 * inv(2)) % MOD;

        cout << (x3 + (x2 * half) % MOD) % MOD << "\n";
    }

    return 0;
}   