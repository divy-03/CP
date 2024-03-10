/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(p) for (auto &e: p) cin >> e;

void solve() {
    ll n, q;
    cin >> n >> q;
    
    vector<ll> p(n); readV(p);
    sort(p.rbegin(), p.rend());
    partial_sum(p.begin(), p.end(), p.begin());

    while (q--) {
        ll x, y; 
        cin >> x >> y;
        if (x==y) print(p[x-1]);
        else print(p[x-1]-p[x-y-1]);
    }
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
