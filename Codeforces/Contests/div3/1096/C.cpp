#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a, b, c, d;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            if (x % 6 == 0) a.push_back(x);
            else if (x % 3 == 0) b.push_back(x);
            else if (x % 2 == 0) c.push_back(x);
            else d.push_back(x);
        }
        
        vector<int> ans;
        for (int& x : a) ans.push_back(x);
        for (int& x : b) ans.push_back(x);
        for (int& x : d) ans.push_back(x);
        for (int& x : c) ans.push_back(x);
        
        for (int& x : ans) cout << x << " ";
        cout << "\n";

    }
    return 0;
}