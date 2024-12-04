#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(a, c) > min(b, d))
        cout << -1;
    else
    {
        cout << max(a, c) << " " << min(b, d);
    }
    return 0;
}