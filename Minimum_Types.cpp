// Date: 06-12-2024 at 08:39 BST
// Link: https://www.codechef.com/problems/MINBUY
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/* author @MullaRohan */
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), fin;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        fin.push_back(v[i] * x);
        sum += v[i] * x;
    }
    sort(fin.begin(), fin.end(), greater<int>());
    if (k > sum)
    {
        cout << -1 << nl;
        return;
    }
    int i = 0, ans = 0;
    while (k > 0)
    {
        k -= fin[i++];
        ans++;
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