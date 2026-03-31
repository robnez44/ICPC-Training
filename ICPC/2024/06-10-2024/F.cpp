#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> alice(5);
    vector<int> bob(4);

    for (int i = 0; i < 5; i++)
        cin >> alice[i];

    for (int i = 0; i < 4; i++)
        cin >> bob[i];

    int a = accumulate(alice.begin(), alice.end(), 0);
    int b = accumulate(bob.begin(), bob.end(), 0);
    
    cout << a - b << "\n"; 

    return 0;
}