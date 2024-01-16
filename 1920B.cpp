#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    vector <ll> vec(a);
    readV(vec);

    sort(vec.begin(), vec.end());

    ll x = b>c ? b : c;
    if (b==c) x++;
    ll mx = -LONG_LONG_MAX;
    ll y = b;
    
    while (x--) {
        ll sum = 0;
        for (ll i = vec.size()-1; i >= vec.size()-c; i--) {
            vec[i] = vec[i]*(-1);
        }
        for (auto &e: vec) {
            sum += e;
        }
        mx = max(sum, mx);
        for (ll i = vec.size()-1; i >= vec.size()-c; i--) {
            vec[i] = vec[i]*(-1);
        }
        if (vec.size() == 1 && mx < 0 && b > c) {
            mx = max(mx, 0ll);
        } else {
            if (y) {
                vec.pop_back();
                y--;
            }
        }
    }
    print(mx);
}

 int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}