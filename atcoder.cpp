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
    
    int idx;
    for (int i=0; i<str.size(); i++) {
        if (str[i]=='.') idx=i;
    }
    // print(idx);
    for (int i=idx+1; i<str.size(); i++) {
        cout << str[i];
    }
}

int main() {
    int t = 1;
    while (t--) solve();
}
