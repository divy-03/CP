/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"

const int N = 10001;
vector <ll> pre;

int main() {
    fastio;
    int t = 1; cin >> t;
    for (int i=1; i<2000; i++) if (i%3!=0 && i%10!=3) pre.push_back(i);
    while (t--) {int n; cin >> n; print(pre[n-1]);}
}
