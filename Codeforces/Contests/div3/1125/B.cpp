#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        vi printed(n + 1, 0);
        int donePrinted = 0;
        stack<int> st;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                st.push(i + 1);
            }
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                    printed[st.top()] = 1;
                    st.pop();
                    donePrinted++;
                    continue;
                }
                printed[i + 1] = 1;
                donePrinted++;
            }
            else
            {
                printed[i + 1] = 1;
                donePrinted++;
            }
        }

        cout << n - donePrinted << "\n";
        if (n - donePrinted > 0)
            {
                for (int i = 1; i <= n; ++i)
                    if (printed[i] != 1)
                        cout << i << " ";
                cout << "\n";
            }
        else
            cout << "\n";
    }

    return 0;
}