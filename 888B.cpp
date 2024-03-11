/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

void solve() {
    ll n; cin >> n;
    string s; cin >> s;
    
    ll cL, cD, cU, cR;
    cL = cD = cU = cR = INT_MAX;
    cL = count(s.begin(), s.end(), 'L');
    cD = count(s.begin(), s.end(), 'D');
    cU = count(s.begin(), s.end(), 'U');
    cR = count(s.begin(), s.end(), 'R');

    print(2*min(cL, cR) + 2*min(cU, cD));
}

int main() {
    fastio; solve();
}
