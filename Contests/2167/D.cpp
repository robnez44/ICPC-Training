#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t, n;
    vector<ll> a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        ll l = 1e6;
        for (ll i = 0; i < n; ++i) cin >> a[i];

        ll g = a[0];
        for (ll i = 1; i < n; ++i) g = __gcd(g, a[i]);

        for (ll i = 2; i < l; ++i)
        {
            if (__gcd(g, i) == 1)
            {
                cout << i << "\n";
                break;
            }     
        }
        
    }
    return 0;
}