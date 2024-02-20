/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
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
    
    char chr; cin >> chr;
    vector<ll> t; vector<ll> c; vector<ll> s; vector<ll> d; vector<ll> h;

    for (int i=0; i<2*n; i++) {
        string str; cin >> str;
        if (str[1]==chr) t.push_back(str[0]-'0'); 
        if (str[1]=='C' && chr!='C') c.push_back(str[0]-'0'); 
        if (str[1]=='S' && chr!='S') s.push_back(str[0]-'0'); 
        if (str[1]=='D' && chr!='D') d.push_back(str[0]-'0'); 
        if (str[1]=='H' && chr!='H') h.push_back(str[0]-'0'); 
    }
    sort(t.begin(), t.end());
    sort(c.begin(), c.end());
    sort(s.begin(), s.end());
    sort(d.begin(), d.end());
    sort(h.begin(), h.end());


}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
