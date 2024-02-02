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
    ll n, k;
    cin >> n >> k;
    
    vector<pair<string, string>> pair(k);
    for (auto &e: pair) cin >> e.first >> e.second;
    vector <string> lect(n); readV(lect);

    for (int i=0; i<n; i++) {
        for (int j=0; j<k; j++) {
            if (lect[i]==pair[j].first) {
                if (pair[j].first.size()>pair[j].second.size()) cout << pair[j].second << " ";
                else cout << pair[j].first << " ";
            }
        }
    }
}

int main() {
    int t = 1;
    while (t--) solve();
}
