#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word1, word2, word3, word4, word5;
    bool flag = false;

    cin >> s;
    cin >> word1 >> word2 >> word3 >> word4 >> word5;

    vector<string> words = {word1, word2, word3, word4, word5};
    sort(words.begin(), words.end());

    do
    {
        string permutation = words[0] + words[1] + words[2] + words[3] + words[4];
        if (s.find(permutation) != string::npos) flag = true;
    } while (next_permutation(words.begin(), words.end()));
    

    cout << (flag ? "Nooo, la polizzia\n" : "Sargento Camelas, Gracias!\n");

return 0;
}
