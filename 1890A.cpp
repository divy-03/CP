#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    const int max_value = 1000000;
    int cntEven = 0;
    int cntOdd = 0;
    vector<int> arr(max_value, 0);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a >= 0 && a <= max_value)
            arr[a]++;
    }

    // for (int i = 0; i <= max_value; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    if (n % 2 == 0)
    {

        for (int i = 0; i <= max_value; i++)
        {
            if (arr[i] % 2 == 0)
                cntEven++;
            else
                cntOdd++;
        }
    }
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
