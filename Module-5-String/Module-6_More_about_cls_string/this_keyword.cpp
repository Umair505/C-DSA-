#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string name;
     int age;
     person(string name,int age){
        this->name = name;
        this->age =age;
     }
     void hello(){
        cout<<"Hello"<<endl;
     }
};
int main()
{
  person moinul("Moinul Islam",22);
  cout<<moinul.name<<" "<<moinul.age<<endl;
  moinul.hello();
   return 0;
}