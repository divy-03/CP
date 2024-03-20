#include <bits/stdc++.h>
using namespace std;

typedef int long long ll;

int main() {
    ll n, m, d=1;
    cin >> n >> m;
    while (n>0) {
        if (d%m==0) n++;
        n--; d++;
    }
    cout << d-1;
}