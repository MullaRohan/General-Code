// Date: 04-12-2024 at 19:05 BST
// Link: https://codeforces.com/problemset/problem/1283/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    cout << (24 * 60) - ((a * 60) + b) << nl;
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