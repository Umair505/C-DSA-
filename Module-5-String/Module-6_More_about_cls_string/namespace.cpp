#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
  int age=24;
  void hello()
  {
   cout<<"Rakib namespace"<<endl;
  }
  
}
namespace Sakib
{
   int age2 =25;
   void hello2()
   {
      cout<<"Sakib namespace"<<endl;
   }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
   cout<<age<<endl;
   hello();
   cout<<age2<<endl;
   hello2();
   // cout<<Rakib::age<<endl;
   // cout<<Sakib::age2<<endl;

   return 0;
}