/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define nl cout << "\n"

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n), b, c(n); readV(a);
    b = a;
    sort(b.begin(), b.end());
    partial_sum(b.begin(), b.end(), c.begin());

    map<ll, ll> mp;
    mp[b[n-1]] = n-1; // last element contains last index
    for (int i=n-2; i>=0; i--) {
        if (c[i] >= b[i+1]) mp[b[i]] = mp[b[i+1]]; // map index of last element
        else mp[b[i]] = i; // map of index of its own
    }
    for (auto &e: a) cout << mp[e] << " "; nl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
