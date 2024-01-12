#include <bits/stdc++.h>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    int arr[n] = {0};

    for (int j = 0; j < 100; j++)
    {   
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'A' && str[i + 1] == 'B' && arr[i] == 0)
            {
                str[i] = 'B';
                str[i + 1] = 'A';
                count++;
                arr[i]++;
            }
        }
        // cout << str << " ";
    }
    // cout << endl;
    // for (int i = 0; i < n; i++) cout << arr[i] << " ";
    // cout << str << endl;

    cout << count << endl;
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