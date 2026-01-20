#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    int n, m;

    cin >> n;
    vi boys(n);
    for (int i = 0; i < n; ++i) cin >> boys[i];

    cin >> m;
    vi girls(m);
    for (int i = 0; i < m; ++i) cin >> girls[i];

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, pairs = 0;

    while (i < n && j < m)
    {
        if (abs(boys[i] - girls[j]) <= 1)
        {
            pairs++;
            i++;
            j++;
        }
        else if (boys[i] < girls[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << pairs << "\n";
    
    return 0;
}