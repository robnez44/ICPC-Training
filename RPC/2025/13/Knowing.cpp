#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int h, m;
    int res;
    cin >> h >> m;

    res = h % 30;
    if (res * 12 == m) cout << "yes\n";
    else cout << "no\n";

    return 0;
}