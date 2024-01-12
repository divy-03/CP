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
    ll n, idx = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 1; i <= str.size(); i++) {
        if (idx < str.size()) cout << str[idx];
        idx += i;
    }
}

int main() {
    solve();
}