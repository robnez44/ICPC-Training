#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word1, word2;
    char firstLWord1, lastLWord2;
    string subW1, subW2;
    string v1, v2;
    string superW;

    cin >> word1;
    cin >> word2;

    firstLWord1 = word1.at(0);
    lastLWord2 = word2.at(word2.length() - 1);

    if (word1.find_first_of("aeiou", 1) != string::npos)
    {
        subW1 = word1.substr(1, word1.find_first_of("aeiou", 1) - 1);
        v1 = word1.at(word1.find_first_of("aeiou", 1));
    }else
    {   
        subW1 = word1.substr(1);
    }
    
    if (word2.find_last_of("aeiou", word2.size() - 2) != string::npos)
    {
        reverse(word2.begin(), word2.end());
        subW2 = word2.substr(1, word2.find_first_of("aeiou", 1) - 1);
        v2 = word2.at(word2.find_first_of("aeiou", 1));
        reverse(subW2.begin(), subW2.end());
    }
    else
    {
        reverse(word2.begin(), word2.end());
        subW2 = word2.substr(1);
        reverse(subW2.begin(), subW2.end());
    }
    
    //merging 
    if (!v2.empty())
    {
        superW = firstLWord1 + subW1 + v2 + subW2 + lastLWord2;
        cout << superW << "\n";
    }else if (v2.empty() && !v1.empty())
    {
        superW = firstLWord1 + subW1 + v1 + subW2 + lastLWord2;
        cout << superW << "\n";
    }else if(v1.empty() && v2.empty())
    {
        superW = firstLWord1 + subW1 + "o" + subW2 + lastLWord2;
        cout << superW << "\n";
    }   

    return 0;
}