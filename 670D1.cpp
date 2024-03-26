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

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> need(n); readV(need);
    vector<ll> tot(n); readV(tot);
    
    map<ll, ll> rem;
    map<ll, ll> mp;
    set<ll> st;
    
    for (int i=0; i<n; i++) {
        ll a = tot[i]/need[i];
        rem[a] += need[i] - tot[i]%need[i];
        mp[a] += need[i];
        st.insert(a);
    }
    auto it = st.begin();
    auto nxt = it; nxt++;
    ll sum = 0, nd = mp[*it], cnt = *it;
    while (nxt != st.end()) {
        ll dif = (*nxt - *it - 1)*nd;
        sum = sum + rem[*it] + nd - mp[*it];
        if (sum>k) {sum = sum - rem[*it]-nd+mp[*it]; break;}
        cnt++;
        sum += dif;
        if (sum>k) {sum = sum - dif; break;}
        cnt = *nxt;
        nd += mp[*nxt];
        it++; nxt++;
    }
    if (sum<k) {
        k = k-sum;
        cnt += k/nd;
    }
    print(cnt);
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
