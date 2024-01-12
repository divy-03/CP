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
    string str;
    cin >> str;

    set<char> st;
 
    ll ans = 0;
    for (auto ch : str) {
        st.insert(ch);
        ans += st.size();
    }
    print(ans);
    // debug(st);
    // nl;
}

int main() {
    ll t = 1;
    cin >> t;

    while (t--) solve();
}