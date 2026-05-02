#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void factorsX(int x, vector<int> &spf, vector<int> &factors)
{
    while (x > 1)
    {
        factors.push_back(spf[x]);
        x /= spf[x];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    int q = 0;
    cin >> n >> q;

    vector<int> spf(n + 1);
    iota(spf.begin(), spf.end(), 0);
    for (int i = 2; i * i <= n; i++)
        if (spf[i] == i)
            for (int j = i * i; j <= n; j += i)
                if (spf[j] == j)
                    spf[j] = i;

    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);

    vector<vector<int>> factors(n + 1);
    for (int i = 1; i <= n; i++)
        factorsX(i, spf, factors[i]);

    sort(nums.begin(), nums.end(), [&](int a, int b) {
        return factors[a] < factors[b];
    });

    while (q--)
    {
        int k;
        cin >> k;
        cout << nums[k - 1] << "\n";
    }

    return 0;
}