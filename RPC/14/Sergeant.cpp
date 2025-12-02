#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word1, word2, word3, word4, word5;
    map<size_t, size_t> posAndLens;
    bool flag = false;

    cin >> s;
    cin >> word1 >> word2 >> word3 >> word4 >> word5;
    string lenghtOfPermutation = word1 + word2 + word3 + word4 + word5;

    for (size_t pos = s.find(word1); pos != string::npos; pos = s.find(word1, pos + 1))
        posAndLens[pos] = word1.length();
    for (size_t pos = s.find(word2); pos != string::npos; pos = s.find(word2, pos + 1))
        posAndLens[pos] = word2.length();
    for (size_t pos = s.find(word3); pos != string::npos; pos = s.find(word3, pos + 1))
        posAndLens[pos] = word3.length();
    for (size_t pos = s.find(word4); pos != string::npos; pos = s.find(word4, pos + 1))
        posAndLens[pos] = word4.length();
    for (size_t pos = s.find(word5); pos != string::npos; pos = s.find(word5, pos + 1))
        posAndLens[pos] = word5.length();

    vector<pair<size_t, size_t>> v(posAndLens.begin(), posAndLens.end());

    for (int i = 0; i+4 < v.size(); ++i)
    {
        size_t s1 = v[i].first + v[i].second;
        size_t s2 = v[i+1].first + v[i+1].second;
        size_t s3 = v[i+2].first + v[i+2].second;
        size_t s4 = v[i+3].first + v[i+3].second;
        size_t s5 = v[i+4].first + v[i+4].second;

        size_t totalL = v[i].second + v[i+1].second + v[i+2].second + v[i+3].second + v[i+4].second;

        if (s1 == v[i+1].first && s2 == v[i+2].first && s3 == v[i+3].first && s4 == v[i+4].first && totalL == lenghtOfPermutation.length())
        {
            flag = true;
            break;
        }
        
    }
    
    cout << (flag ? "Nooo, la polizzia\n" : "Sargento Camelas, Gracias!\n");

    return 0;
}
