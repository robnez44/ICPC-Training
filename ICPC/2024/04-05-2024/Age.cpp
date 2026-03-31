#include <bits/stdc++.h>
using namespace std;

int main()
{
    int O, A, K;
    int a, k;

    cin >> O >> A >> K;

    for (a = 1; a < O; ++a)
    {
        for (k = 1; k < O; ++k)
        {
            if ((a * A) + (k * K) == O)
            {
                cout << 1 << "\n";
                return 0;
            }
                
        }
    }
    cout << 0 << "\n";

    return 0;
}