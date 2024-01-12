#include <iostream>
using namespace std;

#define printnl(a) cout << a << "\n"
#define printab(a, b) cout << a << " " << b << "\n"
#define ll long long

void year(int m)
{
    int a;
    int n = m;
    int arr[10] = {0};

    while (n != 0)
    {
        a = n % 10;
        n /= 10;

        arr[a] += 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 1)
        {
            year(m + 1);
            return;
        }
    }

    cout << m << endl;
}

void solve()
{
    int m;
    cin >> m;
    year(m + 1); 
}

int main()
{
    solve();
    return 0;
}
