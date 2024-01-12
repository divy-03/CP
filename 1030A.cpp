#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a;
    cin >> n;

    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            cout << "HARD";
            break;
        }
        if(n == 0) {
            cout << "EASY";
        }
    }
}

int main()
{
    solve();
}