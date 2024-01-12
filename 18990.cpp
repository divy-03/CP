#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;

    if (n % 3 == 0) printnl("Second");
    else printnl("First");
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