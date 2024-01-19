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
    ll n;
    cin >> n;
    vector<long long> vec(n);
    // readV(vec);
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        vec[i] = 1 << a;
    }

    set<int> mySet(vec.begin(), vec.end());
    ll count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j< n; j++) {
            if (i==j){
                continue;
            } else {
                ll sum = vec[i] + vec[j];

                if (mySet.find(sum) != mySet.end() || mySet.lower_bound(sum) != mySet.end()) {
                    count++;
                }
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i; j < n-2; j++) {
            for (int k = j; k < n-2; k++) {
                ans++;
            }
        }
    }
    // debug(vec);
    // nl;
    // printab(ans, count);
    if (ans-count>0) print(ans-count);
    else print(0);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}