#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

int solve()
{
    int n, m;
    cin >> n >> m;
    
    while(m--) {
        if (n%10 != 0) n--;
        else n /= 10;
    }

    return n;

}

int main()
{
    cout << solve();
}