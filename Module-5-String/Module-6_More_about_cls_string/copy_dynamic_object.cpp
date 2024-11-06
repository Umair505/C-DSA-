#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string name;
     int age;
     person(string name,int age){
        this->name = name;
        this->age = age;
     }
};
int main()
{
  person* moinul= new person("Moinul Islam",22);
  person* mahin = new person("Mahin",21);
//   moinul->name = mahin->name;
//   moinul->age = mahin->age;
*moinul =*mahin;
delete mahin;
  cout<<moinul->name<<" "<<moinul->age<<endl;
   return 0;
}