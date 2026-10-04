#include <bits/stdc++.h>
using namespace std;

int floodFill(vector<vector<char>> &grid, int sr, int sc, char newChar) // DFS
{
    int R = grid.size(), C = grid[0].size();
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    stack<pair<int, int>> st;
    grid[sr][sc] = newChar; 
    int ans = 1;            

    for (int d = 0; d < 4; d++)
        st.push({sr + dx[d], sc + dy[d]});

    while (!st.empty())
    {
        auto [x, y] = st.top();
        st.pop();
        if (x < 0 || x >= R || y < 0 || y >= C) continue;
        if (grid[x][y] != '.') continue;

        grid[x][y] = newChar;
        ans++;

        for (int d = 0; d < 4; d++)
            st.push({x + dx[d], y + dy[d]});
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int R, C;
    while (cin >> R >> C && (R != 0 || C != 0))
    {
        vector<vector<char>> grid(R, vector<char>(C));
        int x, y;

        for (int i = 0; i < R; ++i)
        {
            for (int j = 0; j < C; ++j)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '*')
                {
                    x = i;
                    y = j;
                }
            }
        }

        cout << floodFill(grid, x, y, 'x') << "\n";
    }

    return 0;
}