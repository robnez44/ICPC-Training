#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 1;
        for (int i = 1; i < n; ++i)
            if (s[i] != s[i-1])  count++;

        int toDelete = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            if (s[i] != s[i-1] && s[i] != s[i+1])
            {
                if (s[i-1] == s[i+1])
                    toDelete = 2;
                else 
                    toDelete = max(toDelete, 1);
            }
            
        }

        cout << count - toDelete << "\n";

    }
    

    return 0;
}