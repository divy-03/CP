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
    ll n, x;
    cin >> n >> x;
    
    vector<ll> vec(n); readV(vec);
    int s, e;
    for (int i=0; i<n; i++) if (vec[i]==1) {s = i; break;}
    for (int i=n-1; i>=0; i--) if (vec[i]==1) {e = i; break;}

    if (e-s+1 <= x) YES;
    else NO;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
