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
    ll n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(m); readV(a);
    vector<ll> b(k); readV(b);
    vector<ll> mp(n+1, 0);

    for (int i: b) mp[i]++;
    
    if (k<n-1) cout << string(m, '0') << "\n";
    else if (k == n) cout << string(m, '1') << "\n";
    else {
        for (int i: a) {
            if (mp[i]!=0) cout << 0;
            else cout << 1;
        }nl;
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {solve();}
}
