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
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    for (int i=0; i<n-2 && vec[i]>=0; i++) {
        ll a = vec[i];
        vec[i] -= a;
        vec[i+1] -= a*2;
        vec[i+2] -= a;
    }  
    for (auto &e: vec) if (e != 0) {NO; return;} YES;
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
