#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int m, s;
    cin >> m >> s;

    if (s == 0 && m == 1)
    {
        cout << "0 0\n";
        return 0;
    }
    if (s == 0 && m > 1)
    {
        cout << "-1 -1\n";
        return 0;
    }
    if (s > m * 9)
    {
        cout << "-1 -1\n";
        return 0;
    }

    string smallest = "", largest = "";

    // largest
    int num, copyOfS = s;
    for (int i = 0; i < m; ++i)
    {
        num = min(copyOfS, 9);
        largest += char('0' + num);
        copyOfS -= num;
    }

    // smallest
    int restante = s;
    for (int i = 0; i < m; ++i)
    {
        for (int d = (i == 0 ? 1 : 0); d <= 9; ++d)
        {
            int rest = restante - d;
            int max_possible = 9 * (m - i - 1);
            if (rest >= 0 && rest <= max_possible)
            {
                smallest += char('0' + d);
                restante = rest;
                break;
            }
        }
    }

    cout << smallest << " " << largest << "\n";

    return 0;
}
