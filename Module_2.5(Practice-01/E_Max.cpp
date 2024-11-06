#include<iostream>
using namespace std;
#include<limits.h>
int main()
{
    int n; cin>>n;
    int a[n];
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
         maximum = max(maximum,a[i]);
    }
    cout<<maximum;
    
}