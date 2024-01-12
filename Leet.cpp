#include <iostream>
using namespace std;

#define ll long long

int digits(int n) {
    int count = 0;
    n = abs(n);
    do {
        n /= 10;
        count++;
    } while (n != 0);
    return count;
}

bool checkSum(int n) {
    int a;
    int d = digits(n);
    int r = d/2;
    int sumR = 0, sumL = 0;
    while(n) {
        a = n%10;
        n /= 10;
        if (d > r) sumR += a;
        else sumL += a;
        d--;
    }
    if (sumL == sumR) return true;
    return false;
}

int solve()
{
    int low, high;
    cin >> low >> high;
    
    int ans = 0;
    while (low != high + 1) {
        int d = digits(low);
        if(d % 2 == 0) {
            if(checkSum(low)) ans++;
        }
        low++;
    }
    return ans;
}

int main()
{
    cout << solve();

    return 0;
}