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
        unordered_map<char, bool> table;
        
        int ballons = 0;

        for (char& c : s)
        {
            if (!table[c])
            {
                ballons += 2;
                table[c] = true;
            }
            else
                ballons++;
        }
        cout << ballons << "\n";
    }

    return 0;
}
