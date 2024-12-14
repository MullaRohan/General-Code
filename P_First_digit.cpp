// Date: 14-12-2024 at 21:38 BST
// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
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
    if ((n / 1000) % 2 == 0)
        cout << "EVEN" << nl;
    else
        cout << "ODD" << nl;
    return 0;
}
