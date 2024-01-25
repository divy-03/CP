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
    string str;
    cin >> str;
    
    ll cnt1=0, cnt0=0;
    for (auto ch: str) {
        if (ch=='0') cnt0++;
        else cnt1++;
    }
    ll sum=0;
    for (int i=0; i<str.size(); i++) {
        if (str[i]=='0') {
            if (cnt1==0) {sum+=str.size()-i;break;}
            cnt1--;
        } else {
            if (cnt0==0) {sum+=str.size()-i;break;}
            cnt0--;
        }
    }
    cout << sum << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
