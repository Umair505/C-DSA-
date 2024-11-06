#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   cout<<s[0]<<endl;
   cout<<s.at(0)<<endl;//first element
   cout<<s[s.size()-1]<<endl;//last element
   cout<<s.back()<<endl;
   return 0;
}