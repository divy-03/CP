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
    
    vector<ll> vec(n);
    vector<ll> cnt(3, 0);
    ll sum=0;
    for (auto &e: vec) {
        cin >> e;
        sum += e;
        cnt[e%3]++;
    }
    // print(sum%3);
    // debug(cnt);
    if (sum%3==0) {print(0); return;}
    if (n==1) {print(1); return;}
    if (sum%3==1 && cnt[1]) {print(1); return;}
    if (sum%3==2) {print(1); return;}
    print(2);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
