// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v(4);
    ll sum = 0;
    for (int i = 0; i < 4; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll a = v[3] - v[2];
    ll b = v[3] - v[1];
    ll c = v[3] - v[0];
    cout << a << " " << b << " " << c;
    return 0;
}