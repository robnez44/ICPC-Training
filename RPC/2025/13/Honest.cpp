#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main()
{

    int n; ll l, p;
    unordered_map<int, int> nums;
    vector<int> abcde(5);
    set<int> repeated;

    cin >> n;
    l = 10 * n;

    while (l--)
    {
        for (int i = 0; i < 5; ++i) cin >> abcde[i];
        for (int i = 0; i < 5; ++i) nums[abcde[i]]++;
    }

    for (auto i : nums) if (i.second > 2 * n) repeated.insert(i.first);

    if (repeated.size() > 0)
    {
        bool first = true;
        for (auto i : repeated) 
        {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
        cout << "\n";
    }
    else cout << -1 << "\n";
    
    return 0;
}