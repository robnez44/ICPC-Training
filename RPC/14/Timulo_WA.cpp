#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;

int main(){

    ll n, sum = 0;
    cin >> n;

    vi reposes(n);
    vi colors(n);
    set<ll> seen_colors;
    multimap<ll, ll, greater<ll>> candies;

    for (ll i = 0; i < n; ++i) cin >> reposes[i];
    for (ll i = 0; i < n; ++i) cin >> colors[i];

    for (ll i = 0; i < n; ++i) candies.insert({reposes[i], colors[i]});
    
    auto it = candies.begin();
    sum += it->first;
    seen_colors.insert(it->second);
    
    for(auto it = candies.begin(); it != candies.end(); it++){
        if (!seen_colors.count(it->second))
        {
            sum += it->first;
            seen_colors.insert(it->second);
        }
    }
    
    cout << sum << "\n";

    return 0;
}
