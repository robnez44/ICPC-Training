#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) cin >> a[i];

        for (ll i = n-2; i >= 0; --i) 
            if (a[i+1] > 0)
                a[i] += a[i+1]; 
        
        ll count = 0;
        for (ll i = 0; i < n; ++i)
            if (a[i] > 0)
                count++;
                
        cout << count << "\n";
    }

    return 0;
}