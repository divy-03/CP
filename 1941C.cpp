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
    string s;
    cin >> s;
    
    ll cnt = 0LL;
    if (n < 3) {
        print(0);
        return;
    }
    
    for (int i=0; i<n-2; i++) {
        if (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') {cnt++;}
        if (s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') {cnt++;}
        if (i+5<=n) {
            if (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e') cnt--;
        } 
    }
    print(cnt);
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
