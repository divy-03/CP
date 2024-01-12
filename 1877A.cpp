#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    ll n, sum = 0, e;
    cin >> n;
    ll arr[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> e;
        arr[i] = e;
        sum += e;
    } 
    cout << sum*(-1) << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}