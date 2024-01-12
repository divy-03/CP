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

    vector <pair <ll, ll>> vec(n);
    for (auto &e: vec) cin >> e.first >> e.second;

    sort(vec.begin(), vec.end());

    for (int i = 0; i < n-1; i++) {
        if (vec[i].second <= vec[i+1].second) {
            print("Poor Alex");
            return;
        }
    }  
    print("Happy Alex");
    // for (auto &e: vec) {
    //     cout << e.first << " ";
    // }
    // nl;
    // for (auto &e: vec) {
    //     cout << e.second << " ";
    // }

}

int main() {
    solve();
}