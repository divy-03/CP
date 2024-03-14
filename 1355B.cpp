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

    map<ll, ll> mp;
    for (auto &e: vec) mp[e]++;
    
    auto last = unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());

    for (int i=0; i<vec.size()-1; i++) mp[vec[i+1]] += mp[vec[i]]%vec[i];

    ll ans = 0;
    for (auto &e: vec) ans += mp[e]/e;
    
    print(ans);
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
