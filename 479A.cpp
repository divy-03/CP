#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx = 0;

    mx = max(mx, a+b*c);
    mx = max(mx, a*(b+c));
    mx = max(mx, a*b*c);
    mx = max(mx, (a+b)*c);
    mx = max(mx, a+b+c);
    mx = max(mx, a*b+c);
    
    cout << mx;
}

int main()
{
    solve();
}