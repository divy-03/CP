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
    
    vector<ll> vec(n); readV(vec);
    vector<ll> cnt(n, 0); 
    vector<ll> cnt1(n, 0); 
    for (auto &e: vec) {cnt1[e]++;}
    ll idx=-1;
    for (int i=0; i<n; i++) if (cnt1[i]==0) {idx = i; break;}
    if (idx == -1) {print(-1); return;}
    for (int i=0; i<idx; i++) if (cnt1[i]!=idx+1) {print(-1); return;}
    ll count = 1;
    vector <ll> res;
    for (int j = 0; j<n; j++) {
        cnt[vec[j]]++;
        bool tr = true;
        for (int i=0; i<idx; i++) if (cnt[i]!=count) tr = false;
        if (tr) {count++; res.push_back(j);}
    }
    vector <ll> fin;
    for (auto &e: res) if (e!=0) fin.push_back(e);
    if (fin.size()>idx+1) print(fin.size()+1);
    else print(idx+1);
    if (fin.size() != idx+1) {
        for (auto &e: fin)  {
            cout << e << " " << e << "\n";
        }
        cout << n << " " << n << "\n";
    }
    else {
        for (int i=0; i<fin.size()-1; i++) {
            cout << fin[i] << " " << fin[i+1]-1 << "\n";
        }
        cout << fin[fin.size()-1] << " " << n << "\n";
    }
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
