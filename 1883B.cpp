#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    int sum = 0;
    cin >> str;
    int arr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        arr[int(str[i]) - 97] += 1;
    }

    if ((n - 3) % 2 == 0)
    {
        for (int i = 0; i < 26; i++)
        {
        }
    }

    cout << sum;
    cout << endl;
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