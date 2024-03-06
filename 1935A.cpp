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
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n;
    cin >> n;
    string str;
    cin >> str;

    string rs = str;
    bool res = false;
    reverse(rs.begin(), rs.end());
    if (rs == str) {print(str); return;}
    for (int i=0; i<str.size()/2; i++) {
        if (str[i] < str[str.size()-i-1]) {res = true; break;}
        if (str[i] > str[str.size()-i-1]) {res = false; break;}
    }
    if (res) print(str);
    else print(rs + str);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
