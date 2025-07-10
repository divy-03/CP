/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

const int N = 100005;

string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        
        for (char ch: s) {
            if (ch == '(') {
                if (cnt != 0) ans += ch;
                cnt ++;
            } else {
                cnt--;
                if (cnt != 0) ans+= ch;
            }
            cout << cnt;
        }
        nl;
        
        return ans;
}

int main() {
    string s;
    cin >> s;
    cout << removeOuterParentheses(s);
}
