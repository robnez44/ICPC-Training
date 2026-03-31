#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int n, r, c;
    cin >> n >> r >> c;
    int center = ceil((double)n/2);
    int maxDiff = max(abs(center - r), abs(center - c));
    cout << (10-maxDiff) * 10 << "\n";

    return 0;
}