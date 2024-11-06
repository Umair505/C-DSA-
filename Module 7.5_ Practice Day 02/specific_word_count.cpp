#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
    getchar();
   stringstream ss(s);
   string word;
   while(ss>>word)
   {
    cout<<word<<endl;
   }
   return 0;
}