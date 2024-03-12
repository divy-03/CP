/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    for (int i=0; i<n-2; i++) {
        if (vec[i] < 0) {NO; return;}
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
