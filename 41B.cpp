#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native")
#include <bits/stdc++.h>
#include <stdlib.h>
#include <numeric>

using namespace std;


 
 
typedef long long ll;
typedef long double ld;
typedef vector<ll> vii;
typedef pair<ll, ll> pii;
typedef vector< pii > vpi;
 
#define F(i, m, n) for(ll(i) = m; i < n; ++i)
#define FR(i, k, n) for(ll(i) = n-1; i >= k; --i)
#define f(i, n)  F(i, 0, n)
#define fr(i, n) FR(i, 0, n)
#define p1(x) cout << x <<"\n";
#define p2(x,y) cout << x << " " << y << "\n";
#define p3(x,y,z) cout << x << " " << y << " " << z << "\n";
#define px(a) for(auto x: a) cout<<x<<" "; cout<<'\n';
#define o1(x) cin >> x;
#define o2(x,y) cin >> x >> y;
#define o3(x,y,z) cin >> x >> y >> z;
#define pi 3.1415926535897932384626
#define mod 1000000007
#define all(a)  (a).begin(), (a).end()
#define rall(a)  (a).rbegin(), (a).rend()
#define pb push_back
#define endl '\n'
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define bc(n) __builtin_popcountll(n)
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())
#define ff first
#define ss second
#define mp(a,b) make_pair(a, b)
#define sz(a) a.size()
#define ins insert
#define llmax 5000000000000000005
#define yes p1("YES")
#define no p1("NO")
#define cut cout << endl;
#define vv(a) for(auto & x: a){cin >> x;}
#define vc(v,n) vector<ll>v(n);
 
 

 
/*/-----------------------------Code begins----------------------------------/*/



long long power(long long a, ll b, long long m)
{
    long long result = 1;
    a = a % m;

    while (b > 0) {
        if (b & 1)
            result = (result * a) % m;

        b = b >> 1;
        a = (a * a) % m;
    }

    return result;
}

bool isPrime(long long n)
{
    int k = 5;
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    long long r = 0;
    long long d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }

    for (int i = 0; i < k; i++) {
        long long a = 2 + rand() % (n - 4); 

        long long x = power(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool isPrime = false;
        for (int j = 0; j < r - 1; j++) {
            x = power(x, 2, n);
            if (x == n - 1) {
                isPrime = true;
                break;
            }
        }

        if (!isPrime)
            return false;
    }

    return true;
}

vector<ll>v;
void fact(ll a)
{
    for(ll i = 1; i <= sqrt(a); ++i)
    {
       if(a%i==0)
        {
            if(a/i==i)
            {
                    v.pb(i);   
            }
            else
            {
                    v.pb(i);
                    v.pb(a/i);
            }  
         }
    }
    sort(all(v));
}
// partial_sum(vec.begin(), vec.end(), pref.begin()+1);
ll n=0,b=0,m=0,a=0,c=0,d=0,k=0,x=0,y=0,l=0,r=0;
string p,q;


class math
{
  private:
    int a = 5;
ll sum(ll a,ll b)
{
    return a+b;
}
ll sum(ll a,ll b, ll c)
{
    return a+b+c;
}
string sum(string a)
{
    return a;
}
string sum(string a,string b)
{
    return a+b;
}
string sum(string a,string b,string c)
{
    return a+b+c;
}

public:
    int b = 7;
    int run()
    {
            cout << sum(10,5) << endl;
    }
protected:
    int c = 10;
};

class son_math : protected math
{
public:
    ok()
    {
        cout << b << endl;
    }
};
// math rohan;
    // son_math rohit;
    // p1(rohit.b)
    // operator+


void okms()
{  
    cin >> n >> m;
    vector<ll>v(n);
    f(i,n) cin >> v[i];
    ll ans = m;
    f(i,n)
    {
        for(ll j = i+1;j<n;j++)
        {
            x = m/v[i];
            y = m%v[i] + v[j]*x;
            ans = max(ans,y);
        }
    }
    cout << ans << endl;
}
int main()      
   
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << showpoint;
    cout.precision(15); 
    ll test;
    test = 1;
    
    // cin >> test;
    F(i,1,test+1)
    {
        okms();
    }
    return 0;
}

