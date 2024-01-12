#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;
        arr.push_back(a);
    }
    int max = 0;

    sort(arr.begin(), arr.end());

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
// cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        if(max>arr[i]){
            max=max;
        }
        else{
            max=arr[i];
        }
    }
    cout<<"max is"<<max<<endl;
    int sum=0;
    int count=1;
    for(int i=0;i<n-1;i++){
        sum=arr[i]+sum;   
    }
    cout<<"sum is"<<sum<<endl;

    
    for(int j=n-1;j>=0;j--){
        
        
        if(max<=sum){
            max=max+arr[j];
            sum=sum-arr[j];
            count=count+1;
        }
        else if(max>sum){
            break;
        }
    }

    
    cout<<count<<endl;

    return 0;
}