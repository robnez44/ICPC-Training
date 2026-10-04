#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES\n";
            continue;
        } 
        else if (a != b && n < 3) 
        {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < n-2; ++i)
        {
            swap(a[i], a[i+2]);

            cout << a << endl;
        }
        
        if (a == b) cout << "YES\n";
        else cout << "NO\n";
    }
    


    return 0;
}