#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> dishes(n);
        for(int &x : dishes) cin >> x;

        set<int> winners;

        for (int start = 0; start < n; start++)
        {
            int best_value = -1;
            int best_player = -1;

            for (int i = 0; i < n; ++i)
            {
                int pos = (i - start + n) % n;
                int value = ((dishes[i] - 1) * n) + pos;

                if (value > best_value)
                {
                    best_value = value;
                    best_player = i;
                }
            }
            winners.insert(best_player);
        }
        cout << winners.size() << "\n";
    }
    return 0;
}