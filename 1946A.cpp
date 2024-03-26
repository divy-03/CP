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
    ll n; cin >> n;
    
    vector<ll> vec(n); readV(vec);
    sort(vec.begin(), vec.end());
    ll s = n%2 ? n/2 : n/2 - 1;
    
    ll cnt = 1;
    for (int i=s; i<n; i++) {
        if (vec[i]==vec[i+1]) cnt++;
        else break;
    }
    print(cnt);
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
