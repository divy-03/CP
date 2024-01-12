#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) cout >> e;
#define nl cout << "\n";
#define YES cout << "YES "
#define NO cout << "NO "

void solve() {
    string str;
    cin >> str;

    string ans = "";
    string finAns = "";

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'B') {
           for (int j = ans.size()-1; j >= 0; j--) {
                if (ans[j] <= 'Z') {
                    ans.erase(j, 1);
                    break;
                }
           }
        } 
        else if (str[i] == 'b') {
            for (int j = ans.size()-1; j >= 0; j--) {
                if (ans[j] >= 'a') {
                    ans.erase(j, 1);
                    break;
                }
           }
        } else {
            ans += str[i];
        }
    }
    
    printnl(ans);
}

int main() {
    ll t;
    cin >> t;

    while (t--) solve();
}