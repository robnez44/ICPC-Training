#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, ll> leftovers;

    while (n--)
    {
        string s;
        ll l;
        cin >> s >> l;
        leftovers[s] += l;
    }

    ll lBoxes = (leftovers["L"] + 11) / 12;
    ll mBoxes = (leftovers["M"] + 7) / 8;
    ll sBoxes = (leftovers["S"] + 5) / 6;

    cout << lBoxes + mBoxes + sBoxes << "\n";

    return 0;
}