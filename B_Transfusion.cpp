// Date: 06-12-2024 at 21:18 BST
// Link: https://codeforces.com/contest/2050/problem/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/* author @MullaRohan */
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    if (sum % n != 0)
    {
        cout << "NO" << nl;
        return;
    }
    ll evenSum = 0, oddSum = 0;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i += 2)
    {
        evenSum += v[i];
        even++;
    }
    for (int i = 1; i < n; i += 2)
    {
        oddSum += v[i];
        odd++;
    }
    if ((evenSum / even == sum / n) && (oddSum / odd == sum / n))
    {
        cout << "YES" << nl;
    }
    else
        cout << "NO" << nl;
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