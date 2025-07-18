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
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    sort(vec.begin(), vec.end());
    ll ans = abs(vec[0]-vec[n-1]) + abs(vec[n-1] - vec[1]) + abs(vec[1]-vec[n-2]) + abs(vec[n-2]-vec[0]);
    print(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
