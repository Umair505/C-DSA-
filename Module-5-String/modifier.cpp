#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a="Hello";
   string b="World";
//    a+=b;
//    cout<<a<<endl;
//    cout<<a+b<<endl;
//    a.push_back('A');
//    cout<<a<<endl;
//    cout<<a+'A'<<endl; works
//   a.pop_back();//A delete kore dibe
//   cout<<a<<endl;
string s="HelloWorld";
// s.erase(4,1);//1st ta koinumber theke shuru 2nd kototuku delete korbo
// s.replace(4,3,"Soo");
s.insert(5,"Moinul");
cout<<s<<endl;

   return 0;
}