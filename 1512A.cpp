#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ele = arr[0];

    if (arr[0] != arr[1] && arr[1] == arr[2])
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != ele)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}