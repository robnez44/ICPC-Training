#include <bits/stdc++.h>
using namespace std;

int main(){

    long long t, m, u, added;
    cin >> t;
    while (t--)
    {
        u = 1; added = 1;
        cin >> m;

        if (m == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        
        for (long long i = 1; i <= m; ++i)
        {
            if (i % 2 == 1) 
            {
                u += added;
            }
            else if (i % 2 == 0)
            {
                added *= 2;
                u += added;
            }
        }
        cout << u << "\n";
    }
    

    return 0;
}