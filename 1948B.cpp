/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define readV(vec) for (auto &e: vec) cin >> e;
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> vec(n); readV(vec);
    ll idx = 0;

    // Get the last index of the element smaller than previous one
    for (int i=0; i<n-1; i++) if (vec[i]>vec[i+1]) idx = i+1;
    
    // Break all of the numbers before the 'last' index.
    // It can be proved that we need to break
    // all the numbers before 'last' to make 
    // them less than 'last' index.
    vector<ll> a;
    for (int i=0; i<idx; i++) {
        if (vec[i]/10!=0) a.push_back(vec[i]/10);
        a.push_back(vec[i]%10);
    }
    
    // Insert elements after 'last' index.
    for (int i=idx; i<n; i++) a.push_back(vec[i]);

    if (is_sorted(a.begin(), a.end())) YES
    else NO
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
