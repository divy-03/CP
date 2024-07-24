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
    ll n, c, d;
    cin >> n >> c >> d;
    
    ll s = n*n;
    vector<ll> vec(s); readV(vec);
    sort(vec.begin(), vec.end());
    vector<ll> check;
    ll mn = *min_element(vec.begin(), vec.end());

    ll a = mn;
    for (int i=1; i<=n; i++) {
        check.emplace_back(a);
        for (int i=1; i<n; i++) {
            a += c;
            check.emplace_back(a);
        }
        a = a+d-(n-1)*c;
    }
    sort(check.begin(), check.end());
    for (int i=0; i<s; i++) if (vec[i]!=check[i]) NO
    YES
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
