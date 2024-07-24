/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"

void solve() {
    string s;
    cin >> s;
    
    int a = stoi(s.substr(0, 2));
    // print(a);
    if (a == 0) {cout << "12" << s.substr(2, 5)  << " AM\n"; return;}
    if (a < 12) {printab(s, "AM"); return;}
    if (a == 12) {printab(s, "PM"); return;}
    else {if(a-12<10)cout<<"0"; cout << a-12 << s.substr(2, 5) << " PM\n";}
}

int main() {
    fastio;
    int t = 1; cin >> t;
    while (t--) solve();
}
