#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;long long int n; cin>>a;
   for(int i=0;i<a;i++)
   {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){ cin>>a[i];}
    int minm =INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            int val = a[i]+a[j]+j-i;
            minm = min(minm,val);
        }
    }
    cout<<minm<<endl;

   }
   return 0;
}