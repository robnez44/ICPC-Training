#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    set<int> nums;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        if(nums.count(x)) {
            counter++;
        } else {
            nums.insert(x);
        }
    }
    
    cout << counter << "\n";




    return 0;
}