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
    
    int n = str.size();
    vector <int> cnt(2);
    for (char c : str) {
        cnt[(int)(c-'0')] += 1; // count 1 and 0
    }
    vector <int> need(2);
    int ans = n;
    for (int i=0; i<n; i++) {
        need[(int) (str[i]-'0')^1] += 1;
        if (cnt[0]>=need[0] && cnt[1]>=need[1]) ans = n-1-i;
    }
    print(ans);
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
