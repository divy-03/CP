#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll countH = 0, countV = 0;
    
    if (n%a != 0) countH++; 
    if (m%a != 0) countV++;
    countH += n/a;
    countV += m/a;

    cout << countH*countV;
}

int main()
{
    solve();
}