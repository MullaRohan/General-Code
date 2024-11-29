#include <bits/stdc++.h>
#define null nullptr
using namespace std;
int n, m;
char ch[1000][1000];
bool vis[1000][1000];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m || ch[x][y] == '#')
        return false;
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ch[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ch[i][j] != '#' && vis[i][j] == false)
            {
                dfs(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}