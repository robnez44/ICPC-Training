#include <bits/stdc++.h>
using namespace std;

int main(){

    int q, n;
    string s, t;

    cin >> q;
    while (q--)
    {
        cin >> n;
        cin.ignore();
        cin >> s >> t;
        sort(s.begin(), s.end()); sort(t.begin(), t.end());
        if(s == t) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}