#include<bits/stdc++.h>
using namespace std;
long long int fun(int a,int b)
{
    long long int sum =0;
    for(int i=2;i<=b;i+=2)
    {
        long long int res =pow(a,i);
        sum = sum + res;   
    }
    return sum;
}
int main()
{
   int  x,n; cin>>x>>n;
   long long int ans = fun(x,n);
   cout<<ans<<endl;
   return 0;
}