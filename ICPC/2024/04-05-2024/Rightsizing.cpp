#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int e, a, action;
    map<string, long long int> emp;
    string name;
    long int salary, raise;

    cin >> e >> a;

    for (int i = 0; i < e; ++i)
    {
        cin >> name >> salary;
        emp[name] = salary;
    }

    for (int i = 0; i < a; ++i)
    {
        cin >> action;

        if (action == 1)
        {
            cin >> name >> raise;
            if (emp.find(name) != emp.end())
                emp[name] += raise;
        }
        else
        {
            auto it = emp.begin();
            long int maxSalary = it->second;

            while (it != emp.end())
            {
                if (it->second > maxSalary)
                    maxSalary = it->second;
                it++;
            }

            for (auto i = emp.begin(); i != emp.end(); ++i)
            {
                if (maxSalary == i->second)
                {
                    cout << i->first << " " << i->second << "\n";
                    emp.erase(i);
                    break;
                }
            }
        }
    }

    return 0;
}