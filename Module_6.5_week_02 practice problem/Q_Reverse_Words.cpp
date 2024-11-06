#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   int flag =1;
   while(ss>>word)
   {
     reverse(word.begin(),word.end());
     if(flag == 1){
      cout<<word;
      flag =0;
     }
     else if(flag ==0)cout<<" "<<word;
    
   }
   return 0;
}