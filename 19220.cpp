#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define print(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout << e << " ";
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    ll count1=0, count2=0, count3=0;
    for (int i = 0; i < n; i++) {
        if (s1[i]!=s2[i]) {
            if (s1[i]==s3[i]||s2[i]==s3[i]) {
                count1++;
            } else count3++;
        }
        else count2++;
    }    
    // cout << count1 << " ";
    // printab(count2, count3);
    if (count1) NO;
    else YES;
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}