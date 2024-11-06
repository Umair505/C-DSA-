#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test; cin>>test;
   for(int i=0;i<test;i++)
   {
    string s;
    cin>>s;
    int n = s.size();
    if(s[0]+s[1]+s[2]==s[n-1]+s[n-2]+s[n-3])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }

   return 0;
}