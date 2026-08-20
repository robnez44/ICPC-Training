#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        vi abc(3);
        int rounds = 0;

        cin >> abc[0] >> abc[1] >> abc[2];

        sort(abc.begin(), abc.end());

        while (abc[0] != abc[1] && abc[1] != abc[2])
        {
            abc[2]--;
            abc[0]++;
            rounds++;
        }
        
        cout << rounds << "\n";
    }

    return 0;
}