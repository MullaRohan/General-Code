#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (m < n)
        swap(n, m);

    vector<int> v;
    for (int i = n; i <= m; i++)
    {
        if (i < 2)
            continue;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            v.push_back(i);
    }

    if (v.size() < 2)
    {
        cout << "-1" << endl;
        return 0;
    }

    int dis = INT_MAX;
    for (int i = 1; i < v.size(); i++)
    {
        dis = min(dis, v[i] - v[i - 1]);
    }

    cout << dis << endl;
    return 0;
}
