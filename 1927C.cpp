/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> c1(k);
    vector<ll> c2(k);
    
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        if (a<=k) c1[a-1]=1;
    } 
    for (int i=0; i<m; i++) {
        int a;
        cin >> a;
        if (a<=k) c2[a-1]=1;
    } 
    vector <int> an(k);
    for (int i=0; i<k; i++) an[i] = c1[i] || c2[i];
    ll s1=0, s2=0, sa=0;
    for (int i=0; i<k; i++) {s1 += c1[i]; s2 += c2[i]; sa += an[i];
    }
    if (sa >= k && s1 >= k/2 && s2 >= k/2) YES;
    else NO;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
