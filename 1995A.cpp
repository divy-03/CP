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
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

const int N = 100005;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (k==0) {print(0); return;}
    
    ll ans = 1;
    k-=n;

    while (k>0) {
        (ans&1) ? n-- : n=n;
        k -= n;
        ans++;
    }
    print(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}