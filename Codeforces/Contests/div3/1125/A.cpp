#include <bits/stdc++.h>
using namespace std;
int main(){

    int t, x1, y1, R;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1 >> R;
        int R2 = R * R;

        for (int dx = 0; dx <= R; ++dx)
        {
            int dy2 = R2 - (dx*dx);
            int dyAprox = round(sqrt(dy2));
            if (dyAprox * dyAprox == dy2)
            {
                int y2 = dyAprox + y1;
                int x2 = dx + x1;
                cout << x2 << " " << y2 << "\n";
                break;
            }
        }
        
    }
    


    return 0;
}