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
    vector<ll> b(101);
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        b[a]++;
    }
    
    ll m;
    cin >> m;
    vector<ll> g(101);
    for (int i=0; i<m; i++) {
        int a; cin >> a;
        g[a]++;
    }
    for (int i=0; i<101; i++) {
        if (b[i]!=0);
    }
    
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
