#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   bool inside_word=false;
   int count =0;
   for(char c:s)
   {
    if(isalpha(c)){
        if(inside_word==false){
            count++;
        }
        inside_word =true;
    }
    else{
        inside_word = false;
    }
   }
   cout<<count<<endl;
   return 0;
}

/*
int main()
{
   string s;
   getline(cin,s);
   int count =0;
   stringstream ss(s);
   string word;
   while(ss>>word)
   {
     for(char c:word){
        if(c>='a' && c<='z' || c>='A' && c<='Z'){
            count++;
           break;
        }
     }
   }
   cout<<count<<endl;
   return 0;
}
*/