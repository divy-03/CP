#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll s, n;
    cin >> s >> n;
    vector<ll> d(n);
    vector<ll> b(n);
    ll win = 0;
    ll pow = s;
    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> d[i] >> b[i];
    }

    for (ll j = 0; j < n; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (pow > d[i]) {       
                win++;
                d[i] = INT_MAX;    
                pow += b[i];
            }
        }
    }

    if (win == n) cout << "YES";
    else cout << "NO";
}

int main()
{
    solve();
}