#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string col;
    cin >> col;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (col[i] == col[i + 1])
        {
            count++;
        }
    }

    cout << count;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}