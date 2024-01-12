#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char x;

    for (int i = 1; i <= 8; i++)
    {
        for (int i = 1; i <= 8; i++)
        {
            cin >> x;

            if (x != 46)
            {
                cout << x;
            }
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}