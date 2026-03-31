#include <bits/stdc++.h>
using namespace std;

const int inf = 2000000000;
const int MAX = 100000;
int n;
int values[MAX + 5];
int I[MAX + 5];

int lis() {
    int i, low, high, mid;
    I[0] = -inf;
    for (i = 1; i <= n; i++) I[i] = inf;
    int ans = 0;
    vector<int> seen;
    for(i = 0; i < n; i++) {
        if (find(seen.begin(), seen.end(), values[i]) != seen.end()) continue; // Skip duplicates
        seen.push_back(values[i]);
        low = mid = 0;
        high = ans;
        while(low <= high) {
            mid = (low + high) / 2;
            if(I[mid] < values[i]) low = mid + 1;
            else high = mid - 1;
        }
        I[low] = values[i];
        if(ans < low) ans = low;
    }
    return ans;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> values[i];
    }
    cout << lis() << "\n";
    return 0;
}
