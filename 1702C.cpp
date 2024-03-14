/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> vec(n); readV(vec);

    map <ll, pair<ll, ll>> mp;
    for (int i=0; i<n; i++) mp[vec[i]].first = i+1;
    for (int i=n-1; i>=0; i--) mp[vec[i]].second = i+1;

    while (k--) {
        ll a, b;
        cin >> a >> b;
        if (mp[a].second < mp[b].first && mp[a].second!=0) YES;
        else NO;
    }
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
