// Date: 18-11-2024 at 21:55 BST
// Link: https://codeforces.com/problemset/problem/227/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    unordered_map<ll, ll> mp, np;
    ll j = n;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
        np[v[i]] = j--;
    }
    ll m, left = 0, right = 0;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        left += mp[x];
        right += np[x];
    }
    cout << left << " " << right << nl;
}
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}