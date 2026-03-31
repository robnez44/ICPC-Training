#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n, k;
    vector<int> x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int ans = 0;

        if (k == 1)
        {
            cout << n << "\n";
            continue;
        } 
        else
        {
            while (n > 0)
            {
                ans += n % k;
                n /= k;
            }
            
        }
        cout << ans << "\n";
    }
    

    return 0;
}