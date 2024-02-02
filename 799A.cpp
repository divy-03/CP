/*
    excl - grey
*/
#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"

void solve() {
    ll n, t, k, d;
    cin >> n >> t >> k >> d;
    
    ll time=0, baked=0, t2=0;
    while (baked<n) {
        time++;
        if (time%t==0) baked += k;
        if (time>d) {t2++; if (t2%t==0) baked += k;}
    }

    ll time2 =0, baked2=0;
    while (baked2<n) {time2++; if (time2%t==0) baked2 += k;}

    if (time<time2) YES;
    else NO;
}

int main() {
    int t = 1;
    while (t--) solve();
}
