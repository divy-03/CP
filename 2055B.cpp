/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);  
    readV(a); readV(b);

    for (int i=0; i<n; i++) c[i] = a[i]-b[i];
    sort(c.begin(), c.end());
    for (int i = 1; i<n; i++) if (c[i]<abs(c[0])) NO;
    YES;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
