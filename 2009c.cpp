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
    ll x, y, k;
    cin >> x >> y >> k;
    
    // printab(x/k + x%k, y/k + y%k);
    int ans = x/k + x%k + y/k + y%k;
    int x1 = x/k;
    int y1 = y/k;
    if (x%k) x1++;
    if (x%k) y1++;
    int a = abs(x1-y1);
    ans += a;
    print(ans);

}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
