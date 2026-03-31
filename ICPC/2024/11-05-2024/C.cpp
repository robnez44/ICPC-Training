#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int L, W, H;
    int l, w, h;
    int R, r;

    cin >> L >> W >> H;
    cin >> l >> w >> h;

    R = L*W*H;
    r = l*w*h;  
    

    if (r <= R)
    {
        cout << int (R/r) << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    
    return 0;
}