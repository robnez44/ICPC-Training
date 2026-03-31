#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vll arr(n), sums(n*n);

        for (int i = 0; i < n; ++i) cin >> arr[i];

        int index = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                sums[index] = arr[i] + arr[j];
                index++;
            }
        }

        sort(sums.begin(), sums.end());
        cout << sums[k-1] << "\n";
    }
    

    return 0;
}