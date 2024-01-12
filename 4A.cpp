#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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