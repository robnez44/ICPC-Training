#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int findMex(int l, int r, vi& arr, int n)
{
    set<int> s;
    for(int i = 0; i <= n; ++i) s.insert(i);

    while (l >= 0 && r < 2*n && arr[l] == arr[r])
    {
        s.erase(arr[l]);
        l--; r++;
    }
    return *s.begin();
}

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi arr(2*n);

        for (int i = 0; i < 2*n; ++i) 
            cin >> arr[i];
        
        int x = -1, y;

        for (int i = 0; i < 2*n; ++i)
        {
            if (arr[i] == 0)
            {
                if ( x == -1)
                    x = i;
                else
                    y = i;
            }
        }

        cout << max({findMex(x, x, arr, n), findMex(y, y, arr, n), findMex( (x+y)/2, (x+y+1)/2, arr, n  )}) << "\n";
        
    }
    
    return 0;
}