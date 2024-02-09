/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n;
    cin >> n;
    
    if (n==1) {NO; return;}
    vector<ll> vec(2);
    for (int i=0; i<n; i++) {
        int a; cin >> a;
        vec[a==200]++;
    }
    if (vec[0]%2==0 && vec[0]!=0) {YES; return;}
    else if (vec[1]%2==0 && vec[0]%2==0) {YES; return;}
    else NO;
}

int main() {
    int t = 1;
    while (t--) solve();
}
