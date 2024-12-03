// Date: 03-12-2024 at 19:42 BST
// Link: https://codeforces.com/problemset/problem/1433/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, ans = 0;
    cin >> n;
    ans = ((n % 10) - 1) * 10;
    string sk = to_string(n);
    if (sk.size() == 1)
        ans += 1;
    else if (sk.size() == 2)
        ans += 3;
    else if (sk.size() == 3)
        ans += 6;
    else
        ans += 10;
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