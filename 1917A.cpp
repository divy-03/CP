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
    ll n, count0 = 0, countP = 0, countN = 0;
    cin >> n;

    vector <ll> vec(n);
    readV(vec);
    for (auto &e: vec) {
        if (e < 0) countN++;
        else if (e > 0) countP++;
        else count0++;
    }
    if (count0!=0) {
        print(0);
        return;
    }
    if (countN%2==0) {
        print(1);
        printab(1, 0);
    } else print(0);
    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}