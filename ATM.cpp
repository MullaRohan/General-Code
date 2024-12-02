#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creator Md. Rohan Mulla , 27 - 07 - 2024 at 08:16 AM
    int a;
    double b;
    cin >> a >> b;
    if (a % 5 == 0 && double(a + 0.5) <= b)
    {
        cout << fixed << setprecision(2) << (b - a - 0.5) << endl;
    }
    else
        cout << fixed << setprecision(2) << b << endl;
}
