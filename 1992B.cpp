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
    
    vector<ll> vec(k); readV(vec);
    sort(vec.begin(), vec.end());
    
    ll ans = 0;
    for (int i=0; i<k-1; i++) {
        if (vec[i]==1) ans++;
        else ans += 2*vec[i]-1;
    }
    print(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
