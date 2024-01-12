#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, a;
    cin >> n;
    int arr[n];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
            // i++;
        }
    }

    cout << count;
}

int main()
{
    solve();
}