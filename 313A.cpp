/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

void solve() {
    string n;
    cin >> n;
    
    ll s = n.size();
    string ans = "";
    if (stoi(n)<0) {
        if (n[s-2]>n[s-1]) {ans += n.substr(0, s-2); ans += n[s-1];}
        else ans += n.substr(0, s-1);
    }
    else ans = n;
    print(stoi(ans));
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
