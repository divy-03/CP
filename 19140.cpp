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
    ll n, a, count = 0; 
    cin >> n;
    string str;
    cin >> str;
    vector <ll> alpha(27);

    for (auto &ch: str) {
        a = ch-64;
        alpha[a]++;
    }
    for (int i = 1; i < 27; i++) {
        if (alpha[i] >= i) {
            count++;
        }
        
    }
    print(count);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}