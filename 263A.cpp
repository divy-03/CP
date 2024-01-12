#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int a;
    int oneAt;
    for (int i = 1; i <= 25; i++)
    {
        cin >> a;
        if (a == 1)
        {
            oneAt = i;
        }
    }

    // cout << oneAt;

    int row = oneAt % 5 ? oneAt % 5 : 5;
    int col = oneAt % 5 ? oneAt / 5 + 1 : oneAt / 5;

    // cout << row << " " << col;

    // for (int i = 0; i < 5; )
    cout << abs(col-3) + abs(row-3) << endl;
}

int main()
{
    solve();
}