#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{

    ll n;
    cin >> n;

    ll k = 1;
    while (true)
    {
        if (((k * (k + 1)) / 2) >= n)
            break;
        else
            k++;
    }

    ll start = ((k * (k + 1)) / 2) - k;
    ll relativePos = n - start - 1;

    if (relativePos == 0)
    {
        cout << k << "\n";
    }
    else
    {
        ll gcd = __gcd(relativePos, k);
        ll a = relativePos / gcd;
        ll b = k / gcd;
        cout << k << " " << a << "/" << b << "\n";
    }

    return 0;
}