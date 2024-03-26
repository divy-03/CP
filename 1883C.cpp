/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> vec(n); readV(vec);
    
    ll mn = INT_MAX, cnt = 0;
    for (auto &e: vec) {
        if (e%k==0) mn = 0;
        if (e%2==0) cnt++;
        mn = min(mn, k-e%k);
    }   
    if (k==4) {
        mn = min(mn, 2LL);
        mn = min(mn, 2-cnt);
    }
    (mn<0) ? print(0) : print(mn);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
