#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int n;
    cin >> n;
    
    vector<ll> nums(n), left(n), right(n), ans(n);
    string s;

    for(ll i = 0; i < n; i++) cin >> nums[i];
    cin >> s;
    
    left[0] = 0; right[n-1] = 0;
    for (ll i = 0; i < n-1; ++i)
    {
        if (s[i] == '<')
            left[i+1] = left[i] + 1;
        else if (s[i] == '=')
            left[i+1] = left[i];
        else 
            left[i+1] = 0;
    }
    
    for (ll i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == '>')
            right[i] = right[i+1] + 1;
        else if (s[i] == '=')
            right[i] = right[i+1];
        else
            right[i] = 0;
    }

    for (ll i = 0; i < n; ++i)
        ans[i] = max(left[i], right[i]) + 1;

    ll product = 0;
    for (ll i = 0; i < n; ++i)
        product += nums[i] * ans[i];

    cout << product << "\n";
    for (ll i = 0; i < n; ++i)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}