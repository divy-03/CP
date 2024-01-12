#include <iostream>
using namespace std;

#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define printnl(a) cout << a << "\n"

void solve() {

    int n;
    cin >> n;
    string s;
    cin>>s;
    string b;
    int countV1=0;
    int countV2=0;
    int a=s.length();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='a' || s[i]=='e')
        {
            b.push_back('V');
            countV1++;
        }
        else{
            b.push_back('C');
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]=='V' && b[i-1]=='C' && b[i+1]=='C' && b[i+2]!='V')
        {
            countV2++;
            if(countV2<countV1)
            {
                cout<<s[i-1]<<s[i]<<s[i+1]<<'.';
            }
            else
            {
            cout<<s[i-1]<<s[i]<<s[i+1];
            }
        }
        else if(b[i]=='V' && b[i-1]=='C' && b[i+1]=='C' && b[i+2]=='V' )
        {
            countV2++;

            
            if(countV2<countV1)
            {
                cout<<s[i-1]<<s[i]<<'.';
            }
            else
            {
            cout<<s[i-1]<<s[i];
            }           
        }
        else if(b[i]=='V' && b[i-1]=='C' && b[i+1]!='C' )
        {
            countV2++;
            if(countV2<countV1)
            {
                cout<<s[i-1]<<s[i]<<'.';
            }
            else
            {
            cout<<s[i-1]<<s[i];
            }      
            
        }
    }
    
// cout<<b<<endl;
cout<<endl;

}


int main() {
    int t = 1;
    cin >> t;

    while (t--) solve();
    return 0;
}