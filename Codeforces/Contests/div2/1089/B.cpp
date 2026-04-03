#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> chairs(n);
        for (int i = 0; i < n; ++i) cin >> chairs[i];

        int counter = 0;
        for (int i = 0; i < n; ++i) if (i+1 >= chairs[i]) counter++;
        
        cout << counter << "\n";
    }

    return 0;
}