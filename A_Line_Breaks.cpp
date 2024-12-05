// Date: 05-12-2024 at 21:01 BST
// Link: https://codeforces.com/contest/2050/problem/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s.size());
    }
    int i = 0, ans = 0;
    while (i < n && m >= v[i])
    {
        m -= v[i];
        ans++, i++;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}