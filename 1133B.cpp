#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n, k;
    cin >> n >> k;

    list<ll> vec(n);
    readV(vec);

    ll cnt = 0;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        for (auto jt = next(it); jt != vec.end(); ++jt) {
            if ((*it + *jt) % k == 0) {
                cnt++;
                it = vec.erase(it);
                jt = vec.erase(jt);
                it--;
                break;
            }
        }
    }
    print(2 * cnt);
}

int main() {
    int t = 1;
    while (t--) solve();
    return 0;
}
