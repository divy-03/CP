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
#define YES cout << "Yes" << "\n"
#define NO cout << "No" << "\n"

const int N = 100005;

void solve() {
    string s;
    cin >> s;
    
    stack <char> st;

    for (char ch: s) {
        if (!st.empty()){
            if (st.top() == ch) st.pop();
            else st.push(ch);
        } else st.push(ch);
    }

    if (st.empty()) YES;
    else NO; 
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
}
