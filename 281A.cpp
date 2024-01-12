#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string n;
    cin >> n;

    if (n[0] > 96)
    {
        n[0] -= 32;
    }

    cout << n;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}