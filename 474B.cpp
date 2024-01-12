#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, m;
    ll ans = 1;
    cin >> n;   
    vector<ll> piles(n);

    int prev = 0;
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
        piles[i] += prev;
        prev = piles[i];
    }

    cin >> m;
    vector <ll> worm(m);
    for (auto &i : worm) cin >> i;
    

    for (auto &target : worm) {
        auto index = lower_bound(piles.begin(), piles.end(),target) - piles.begin();
        printnl(index+1);
    }

}

int main()
{
    solve();
}