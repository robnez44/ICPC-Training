#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    int plus = 0, minus = 0;

    while (n--)
    {
        cin >> s;
        auto isIt = s.find('+');

        if (isIt != string::npos) plus++;
        else minus++;        
    }
    cout << plus - minus << "\n";

    return 0;
}