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
    string s;
    cin >> s;
    
    ll ib = -1, iB = -1;
    for (int i=0; i<s.size(); i++) {
        if (ib != -1 && s[i]=='b') cout << ib << " ";
        if (iB != -1 && s[i]=='B') cout << iB << " ";
        if (isupper(s[i])) iB = i;
        else ib = i;
    }
    print(s);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
