#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    vector<int> nums;
    bool odd, even;
    while (t--)
    {
        cin >> n;
        nums.resize(n);
        odd = even = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
            if(nums[i] % 2 == 0) odd = true;
            else even = true;
        }

        if(odd && even) sort(nums.begin(), nums.end());

        for (int i = 0; i < n; ++i)
            cout << nums[i] << " ";
        cout << "\n";
    }

    return 0;
}