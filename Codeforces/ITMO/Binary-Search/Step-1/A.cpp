#include <bits/stdc++.h>
using namespace std;

// ITERATIVE VERSION
bool binary_searchh(vector<int>& a, int x)
{
    int n = a.size();
    int l = 0;
    int r = n - 1;
    bool flag = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (a[mid] == x)
            return true;
        else if (a[mid] < x)
            l = mid + 1;
        else if (a[mid] > x)
            r = mid - 1;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 0; i < k; ++i)
    {
        int x;
        cin >> x;
        cout << (binary_searchh(arr, x) ? "YES\n" : "NO\n");
    }

    return 0;
}