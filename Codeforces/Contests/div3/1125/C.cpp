#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi keys(n), units(n-4);

        for (int i = 0; i < n; ++i)
            cin >> keys[i];

        for (int i = 0; i < n-4; ++i)
            units[i] = keys[i] + keys[i+2] - keys[i+4];

        unordered_map<int, ll> freqs;
        for (int i = 0; i < n-4; ++i)
            freqs[units[i]]++;
        
        ll ans = 0;
        for (auto it : freqs)
            ans += (it.second * (it.second - 1)) / 2;

        for (int i = 0; i < n-4; ++i)
        {
            if (i+2 < n-4 && units[i] == units[i+2]) ans--;
            if (i+4 < n-4 && units[i] == units[i+4]) ans--;
        }
        
        cout << ans << "\n";
    }

    return 0;
}