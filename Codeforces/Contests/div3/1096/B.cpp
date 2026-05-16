#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n; string s;
        cin >> n;
        cin >> s;
        
        if (s.size() % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        
        int openPar = 0, closePar = 0;
        for (char c : s)
        {
            if (c == '(')
                openPar++;
            else
                closePar++;
        }

        if (openPar == closePar)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}