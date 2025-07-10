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
    ll n, s;
    cin >> n >> s;
    
    vector<ll> vec(n); readV(vec);
    int ans = min(s-vec[0], vec[n-1]-s)*2 + max(s-vec[0], vec[n-1]-s);
    ans = vec[0] > s ? vec[n-1]-s : ans;
    ans = vec[n-1] < s ? s-vec[0] : ans;
    print(ans);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
