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
    map<ll, ll> mp;
    vector<ll> ans;
    
    ll sum = accumulate(vec.begin(), vec.end(), 0LL);
    if (s<sum) {debug(vec); return;}
    if (s == sum) {print(-1); return;}

    for (int e: vec) mp[e]++;
    
    if (s <= sum+1) {
        for (int i=0; i<mp[0]; i++) ans.push_back(0);
        for (int i=0; i<mp[2]; i++) ans.push_back(2);
        for (int i=0; i<mp[1]; i++) ans.push_back(1);
        debug(ans);
    } else print(-1);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
