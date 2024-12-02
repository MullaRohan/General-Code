// Date: 02-12-2024 at 10:25 BST
// Link: https://codeforces.com/problemset/problem/1367/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ev = 0, od = 0;
    bool evTurn = true;
    for (int i = 0; i < n; i++)
    {
        if (evTurn)
        {
            if (v[i] % 2 == 1)
                ev++;
            evTurn = !evTurn;
        }
        else
        {
            if (v[i] % 2 == 0)
                od++;
            evTurn = !evTurn;
        }
    }
    if (ev == 0 && od == 0)
        cout << 0 << nl;
    else if (ev == od)
        cout << ev << nl;
    else
        cout << -1 << nl;
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