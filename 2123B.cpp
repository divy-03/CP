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
    ll n, j, k, cnt = 0, a;
    cin >> n >> j >> k;
    set<int> st;

    for (int i = 0; i<n; i++) {
        int t;
        cin >> t;
        if (i == j-1) a = t;
        st.insert(t);
    }

    for (auto it = st.rbegin(); it != st.rend(); ++it) {
        cnt++;
        if (a == *it) break; 
    }

    if (cnt <= k) YES;
    else NO;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
