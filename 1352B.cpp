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
    ll a=k;
    
    vector <ll> vec;
    if (n%2==0 && k%2==1) {
        vec.push_back(n-2*(k-1));
        k--;
        while(k--) {
            vec.push_back(2);
        }
    }
    else {
        vec.push_back(n-k+1);
        k--;
        while(k--) {
            vec.push_back(1);
        }
    }
    if (n%2==1&&a%2==0 || a>n || vec[0]<1) {NO;}
    else {YES;debug(vec);}
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
