// https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int nextPrime(int n)
{
    int j = n;
    bool flag;
    while (true)
    {
        flag = true;
        j++;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return j;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (isPrime(n) && (nextPrime(n) == m))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}