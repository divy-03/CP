/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
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
    
    ll mn = INT_MAX;
    while(n--) {
        string str;
        cin >> str;

        ll cnt=0;
        for (char ch: str) {
            if (ch=='1') cnt++;
        }
        cnt = cnt==0 ? INT_MAX : cnt;
        mn = min(mn, cnt);
    }
    if (mn==1) print("TRIANGLE");
    else print("SQUARE");
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
