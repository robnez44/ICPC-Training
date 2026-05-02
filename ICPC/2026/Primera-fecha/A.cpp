#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int m = 0;

    cin >> n >> m;

    int bill_sum = 0;
    for(int i = 0; i < n; i++) {
        int x = 0;
        cin >> x;
        bill_sum += x; 
    }

    int paid_sum = 0;
    for(int i = 0; i < m; i++) {
        int x = 0;
        cin >> x;
        paid_sum += x; 
    }

    if(paid_sum >= (bill_sum * 1.1)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}