#include <bits/stdc++.h>
using namespace std;

#define modulo(n, m)                (n & (m - 1))
#define is_power_of_two(n)          !(n & (n - 1))
#define turn_off_last_bit(n)        (n & (n - 1))
#define turn_on_last_zero(n)        (n | (n + 1))
#define turn_off_last_oneblock(n)   (n & (n + 1))
#define turn_on_last_zeroblock(n)   (n | (n - 1))

int main(){
    // 0 - mask
    int S = 7; // 111
    cout << S << "\n";

    // 1 - obtain the remainder (modulo) of S when it is divided by N (N is a power of 2)
    cout << modulo(S, 4) << "\n"; // 7 % 4 = 3 (11 in base 2)

    // 2 - determine if S is a power of 2
    cout << is_power_of_two(S) << "\n"; // 0

    // 3 - turn off the last one in S
    S = 40; // 101000
    cout << turn_off_last_bit(S) << "\n"; // 100000 (32)

    // 4 - turn on the last zero in S
    S = 41; // 101001
    cout << turn_on_last_zero(S) << "\n"; // 101011 (43)

    // 5 - turn off the last consecutive run of ones in S
    S = 39; // 100111
    cout << turn_off_last_oneblock(S) << "\n"; // 100000 (32)

    // 6 - turn on the last consecutive run of zeroes in S
    S = 36; // 100100
    cout << turn_on_last_zeroblock(S) << "\n"; // 100111 (39)

    // 7 & 8 solved at UVa-Solutions repo

    return 0;
}