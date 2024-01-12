#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;

    while (n >= 2)
    {
        if (n % 2 != 0)
        {
            count++;
            n = n - 1;
        }
        n = n / 2;
    }
    cout << count + 1;
}

int main()
{
    solve();
}