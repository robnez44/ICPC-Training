#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main()
{

    int A, X;
    cin >> A >> X;

    int i = 2, j = 0;
    bool flag = true;

    while (A != 1)
    {
        while (i <= X)
        {
            if (A % i == 0)
            {
                A /= i;
                j++;
                i = 2;
            }
            else i++;
        }
        
        if (A == 1)
        {
            break;
        }
        

        if (i > X)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << j << "\n";
    else
        cout << "what is Obo?\n";

    return 0;
}