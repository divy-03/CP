#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"

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
}

int main() {
    ll t = 1;
    cin >> t;

    while (t--) solve();
}