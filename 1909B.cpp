/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    
    vector<long long> vec(n);
    readV(vec);

    ll ans = 0;
    ll s = n+1, t = n+1;
    for (auto &e: vec) {
        if (e<=s) s = e;
        else if (e<=t) t = e;
        else {
            s = t;
            t = e;
            ans++;
        }
    }
    print(ans);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
