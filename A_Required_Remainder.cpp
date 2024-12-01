// Date: 01-12-2024 at 19:22 BST
// Link: https://codeforces.com/problemset/problem/1374/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    cout << (((n - y) / x) * x) + y << nl;
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