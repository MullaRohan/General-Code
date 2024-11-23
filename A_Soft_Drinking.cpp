// Date: 19-11-2024 at 11:50 BST
// Link: https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k, l, c, d, p, Nl, np;
    cin >> n >> k >> l >> c >> d >> p >> Nl >> np;
    int drink = (k * l) / Nl;
    int slice = (c * d);
    int salt = p / np;
    cout << min({drink, slice, salt}) / n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}