#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

// ACCEPTED

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int diff = abs(arr[0] - arr[n - 1]);
    int a = 1;
    int b = n;

    for (int i = 0; i < n-1; i++)
    {
        diff = min(diff, abs(arr[i] - arr[i + 1]));
        if (diff == abs(arr[i] - arr[i + 1]))
        {
            a = i + 1;
            b = i + 2;
        }
    }

    cout << a << " " << b << endl;
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
}