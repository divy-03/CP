#include <bits/stdc++.h>
using namespace std;


#define printnl(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i+1 == arr[j]) cout << j + 1 << " "; 
        }
    }
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}