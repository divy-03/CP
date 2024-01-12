#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{   
    int n;
    cin >> n;
    int arr[n];
    int count = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << 1;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            count++;
        }
        else
            count = 1;
        ans = max(count, ans);
    }

    cout << ans;
}

int main()
{
    solve();
}