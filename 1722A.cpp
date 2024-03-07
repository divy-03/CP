#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define print(a) cout << a << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n, a;
    cin >> n;

    string s;
    cin >> s;
    string t = "Timur";
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if (s == t) YES;
    else NO;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}