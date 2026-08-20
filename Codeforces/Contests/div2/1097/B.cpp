#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mex(vector<ll> &arr, ll N)
{
    ll mex = 0;
    for (ll idx = 0; idx < N; idx++) if (arr[idx] == mex) mex++;
    return mex;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end()); 

        ll globalMex = 0;
        for (ll i = 0; i < n; ++i)
            if (a[i] == globalMex) globalMex++;

        ll maxValue = a[n-1];
        ll mexSum = 0, maxSum = 0, curMex = 0, curMax = 0;

        if (maxValue > globalMex) 
        {
            a.pop_back();
            a.insert(a.begin(), maxValue);
        }

        
        for (ll i = 0; i < n; ++i)
        {
            if (a[i] == curMex) curMex++;
            curMax = max(curMax, a[i]);
            mexSum += curMex;
            maxSum += curMax;
        }
        
        cout << mexSum + maxSum << "\n";
    }

    return 0;
}