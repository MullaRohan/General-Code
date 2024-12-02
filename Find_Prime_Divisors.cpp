#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int x = 0;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i != j && i % j == 0)
                {
                    x++;
                    break;
                }
            }
            if (x == 0)
            {
                cout << i << " ";
                m++;
            }
        }
    }
    if (m == 0)
        cout << "-1" << endl;
    return 0;
}