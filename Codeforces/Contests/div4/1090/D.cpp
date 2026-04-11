#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<ll> primes;

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    for (ll i = 2; i <= n; i++) if (isPrime[i]) primes.push_back(i);

    return primes;
}

int main()
{
    int t;
    cin >> t;

    vector<ll> primes = sieve((ll)1e6);

    while (t--)
    {
        int n;
        cin >> n;
        
        for (ll i = 1; i <= n; ++i) cout << primes[i] * primes[i-1] << " ";
        cout << "\n";
    }

    return 0;
}