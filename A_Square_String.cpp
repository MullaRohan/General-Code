// Date: 03-12-2024 at 19:18 BST
// Link: https://codeforces.com/problemset/problem/1619/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2 == 1)
    {
        cout << "NO" << nl;
        return;
    }
    int i = 0, j = s.size() / 2;
    while ((i < j) && j < s.size())
    {
        if (s[i] != s[j])
        {
            cout << "NO" << nl;
            return;
        }
        i++, j++;
    }
    cout << "YES" << nl;
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