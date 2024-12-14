// Date: 14-12-2024 at 21:44 BST
// Link: https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/* author @MullaRohan */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}
