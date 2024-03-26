/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> vec(n); readV(vec);
    vector<ll> og(vec.begin(), vec.end());
    
    ll cnt = 0;
    for (int i=1; i<n; i++) {
        if (vec[i]<vec[i-1]) vec[i] += ((vec[i-1]-vec[i])/k+1)*k;
        if (vec[i]==vec[i-1]) vec[i] += k;
    }
    for (int i=0; i<n; i++) cnt += (vec[i] - og[i])/k;
    print(cnt);
}

int main() {
    fastio;
    solve();
}
