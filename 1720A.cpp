#include <bits/stdc++.h>
using namespace std;

#define print(a) cout << a << "\n"
#define ll long long

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = a*d;
    ll y = b*c;

    if (x==y) {
        print(0);
        return;
    }

    if (x==0||y==0) {
        print(1);
        return;
    }
    if (x%y==0||y%x==0) print(1);
    else print(2);
}

int main()
{
    ll t;
    cin >> t;

    while (t--) solve();
}