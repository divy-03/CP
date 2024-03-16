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
    
    string s1 = "AA", s2 = "BB";

    if (n&1) {NO; return;}
    YES;
    for (int i=0; i<n/2; i++) {
        if (i&1) cout << s1;
        else cout << s2;
    }
    nl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
