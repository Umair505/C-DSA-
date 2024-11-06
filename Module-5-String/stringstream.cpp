#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);//ekta ekta word ber kore dibe group theke 
   string word; //word gulo string word er moddhe dia dibe
   while(ss>>word){//totokkhno porjontho dibe jotokkhn string er shob word shesh na hoye jai
    cout<<word<<endl;
   }
   //we can also count word
//    int count =0;
//    while(ss>>word){
//      count++;
//    }
//    cout<<count<<endl;
   return 0;
}