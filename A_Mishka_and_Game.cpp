// Date: 20-11-2024 at 22:59 BST
// Link: https://codeforces.com/problemset/problem/703/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    int mis = 0, chirs = 0;
    for (int i = 0; i < test; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            mis++;
        else if (c > m)
            chirs++;
    }
    if (mis == chirs)
        cout << "Friendship is magic!^^" << nl;
    else if (mis > chirs)
        cout << "Mishka" << nl;
    else
        cout << "Chris" << nl;
    return 0;
}