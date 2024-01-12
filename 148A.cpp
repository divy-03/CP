#include <iostream>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"

// ACCEPTED

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }

    printnl(count);
}

int main()
{
    solve(); // Call the solve function to calculate the number of slain dragons

    return 0;
}
