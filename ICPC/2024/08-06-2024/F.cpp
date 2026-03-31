#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n;
    
    vector<int> premios;

    cin >> n >> p;
    vector<int> prizes(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prizes[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(prizes[i] <= p){
        premios.push_back(prizes[i]);
        }
    }

    cout << *max_element(premios.begin(), premios.end()) << "\n";
    
            


    return 0;
}