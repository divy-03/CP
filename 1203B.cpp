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
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

void solve() {
    ll n;
    cin >> n;
    
    set <ll> st;
    map <ll, ll> mp;
    for (int i=0; i<4*n; i++) {
        ll a; cin >> a; 
        st.insert(a);
        mp[a]++;
    }
    for (auto &e: st) if (mp[e]%2) NO 
    if (st.size()==1 || st.size()==2) YES
    // if (st.size()&1) NO
    vector <ll> vec(st.begin(), st.end());
    // debug(vec);
    ll s = vec.size()-1;
    ll pro = vec[0]*vec[s];
    for (int i=0; i<(s+2)/2; i++) if (vec[i]*vec[s-i]!=pro) NO
    YES
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
