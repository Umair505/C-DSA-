#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test; cin>>test;
   while(test--)
   {
    int n; cin>>n;
    int a[n];
    int cntOdd=0; 
    int cntEvn=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    if(n%2==0)
    {
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        {
          cntEvn++;
        }
        else{
            cntOdd++;
        }
    }
    if(cntOdd==cntEvn){
        cout<<"0"<<endl;
    }
    else{
        int ans = (abs(cntOdd-cntEvn))/2;
        cout<<ans<<endl;
    }
    }
    
   
    else
    {
        cout<<"-1"<<endl;
    }
   }
   return 0;
}