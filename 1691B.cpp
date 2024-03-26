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
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    map <ll, ll> mp;
    for (auto &e: vec) mp[e]++;
    // for (auto &e: vec) if (mp[e] < 2) {print(-1)l ; return;}
    for (auto &e: vec) cout << mp[e] << " "; nl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
