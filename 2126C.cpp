#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define readn for(i=0;i<n;i++) cin >> a[i]
#define pb push_back


int main() {
    // your code goes here
    int t=1;
    cin>>t;
    while (t--)
    {
        int n,i,k,f=0;cin>>n>>k;vector<int>a(n);readn;
        k=k-1;
        int num=a[k],index,num1;
        sort(a.begin(),a.end());
        if(a[n-1]==num)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for (i=0;i<n-1; i++)
        {
            if(a[i]==num and a[i+1]!=num)
            {
                index=i;
                break;
            }
        }
        num1=a[index];
        for(int i=index;i<n-1;i++)
        {
            if((a[i+1]-a[i])>num1)
            {
                f=1;
                break;
            }
        }
        cout<<(f==1 ? "NO" : "YES")<<endl;
    }
}