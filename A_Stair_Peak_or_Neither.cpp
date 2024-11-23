// Date: 21-11-2024 at 20:18 BST
// Link: https://codeforces.com/problemset/problem/1950/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << "STAIR" << nl;
    else if (b > c && b > a)
        cout << "PEAK" << nl;
    else
        cout << "NONE" << nl;
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