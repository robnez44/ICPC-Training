#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

class UnionFind
{ // OOP style
private:
    vi p, rank, setSize;
    int numSets;

public:
    UnionFind(int N)
    {
        p.assign(N+1, 0);
        for (int i = 1; i <= N; ++i)
            p[i] = i;
        rank.assign(N+1, 0);
        setSize.assign(N+1, 1);
        numSets = N;
    }

    int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
    bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

    int numDisjointSets() { return numSets; }
    int sizeOfSet(int i) { return setSize[findSet(i)]; }

    void unionSet(int i, int j)
    {
        if (isSameSet(i, j))
            return;
        int x = findSet(i), y = findSet(j);
        if (rank[x] > rank[y])
            swap(x, y);
        p[x] = y;
        if (rank[x] == rank[y])
            ++rank[y];
        setSize[y] += setSize[x];
        --numSets;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, u, v;

    while (cin >> n >> p && (n != 0 || p != 0))
    {
        UnionFind ufds(n);

        for (int i = 0; i < p; ++i)
        {
            cin >> u >> v;
            ufds.unionSet(u, v);
        }

        int sets = ufds.numDisjointSets();
        int maxSize = 0;
        for (int i = 1; i <= n; i++)
            if (ufds.findSet(i) == i)
                maxSize = max(maxSize, ufds.sizeOfSet(i));

        cout << sets << " " << maxSize << "\n";
    }

    return 0;
}