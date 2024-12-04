// Date: 04-12-2024 at 19:00 BST
// Link: https://codeforces.com/problemset/problem/1624/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int Max = INT_MIN, Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Max = max(x, Max);
        Min = min(x, Min);
    }
    cout << Max - Min << nl;
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