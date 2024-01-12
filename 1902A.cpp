#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;

void solve() {
    ll n, count0 = 0, count1 = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0') count0++;
        else count1++;
    }

    if (count1==n) cout<<"NO\n";
    
    else cout<<"YES\n";    
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}