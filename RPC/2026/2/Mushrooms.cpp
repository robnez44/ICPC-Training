#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int r, c;
    cin >> r >> c;

    if (c == 1) {
        cout << 1 << "\n";
    }
    else if (r == 1) {
        cout << (c + 2) / 3 << "\n";
    }
    else if (r == 2) {
        cout << (c + 2) / 2 << "\n";
    }
    else {
        cout << -1 << "\n";
    }

    return 0;
}