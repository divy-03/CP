#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a;
    cin >> n;
    int arr[n] = {0};
    int count = 0;

    int p, q;

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        arr[a-1] += 1;
    }
    
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a;
        arr[a-1] += 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count++;
        // cout << arr[i];
    }
    
    if (count == 0) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}

int main()
{
    solve();
}