#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = n;
    vector<string> vv;
    int i = 1;
    while (x != 0)
    {
        int tmp = x % 10;
        x /= 10;
        if (tmp != 0)
        {
            string s;
            s.push_back(tmp + '0');
            for (int j = 1; j < i; j++)
            {
                s.push_back('0');
            }
            vv.push_back(s);
        }
        i++;
    }
    cout << vv.size() << nl;
    for (auto x : vv)
        cout << x << " ";
    cout << nl;
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