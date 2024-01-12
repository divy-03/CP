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
    string t;
    char l;
    cin >> n >> l >> t;
    ll frontG;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'g') {
            frontG = i;
            break;
        }
    }
    // print(frontG);
    ll lastL;
    for (int i = 0; i < n; i++) {
        if (t[i] == l) {
            lastL = i;
        }
    }
    // print(lastL);
    if (l == 'g') {
        print(0);
        return;
    }
    for (int i = lastL; i < n; i++) {
        if (t[i] == 'g'){
            print(i-lastL);
            return;
        }
    }
    print(n-lastL+frontG);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}