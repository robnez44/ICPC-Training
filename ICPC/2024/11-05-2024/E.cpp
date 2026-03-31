#include <iostream>
using namespace std;

int main()
{

    int a, b, k;

    cin >> a >> b >> k;

    for (int i = 1; i <= k; ++i)
    {
        int y = ((a * i) + b);

        cout << y << " ";
    }

    return 0;
}