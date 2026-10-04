#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modexp(ll base, ll exp, ll mod)
{
    ll res = 1 % mod;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1LL)
            res = (__int128)res * base % mod;
        base = (__int128)base * base % mod;
        exp >>= 1LL;
    }
    return res;
}

ll invMod(ll a, ll MOD)
{
    return modexp(a, MOD - 2, MOD);
}

const ll MOD = 1e9 + 7;
int inv6 = invMod(6, MOD);

ll nC3(ll n)
{
    return (n % MOD) * ((n - 1) % MOD) % MOD * ((n - 2) % MOD) % MOD * inv6 % MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;

        ll ans = nC3(n);
        cout << ans << "\n";
    }

    return 0;
}