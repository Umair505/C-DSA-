#include<bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if(ss>>word)//grp theke word ber hocche kina.Jotokkhon word shesh na hoi
    {
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   print(ss);
   return 0;
}