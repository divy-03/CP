#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n";
#define printab(a,b) cout << a << " " << b << "\n";
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;

    ll idx = -1;
    for (int i = 0; i < n - 1; i++) {
        if (str[i] == '*' && str[i + 1] == '*') {
            idx = i;
            break;
        }
    }

    ll cnt = 0;
    if (idx != -1) {
        for (int i = 0; i <= idx; i++) {
            if (str[i] == '@') cnt++;
        }
    } else {
        cnt = count(str.begin(), str.end(), '@');
    }
    print(cnt);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
