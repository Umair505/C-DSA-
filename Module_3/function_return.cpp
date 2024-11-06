#include<bits/stdc++.h>
using namespace std;
class Student
{
 public:
 int roll;
 int cls;
 double gpa;
  Student(int roll,int cls,double gpa){
    this->roll =roll;
    this->cls = cls;
    this->gpa =gpa;
  }  
};
Student fun()
{
    Student rahim(342,5,4.22);
    return rahim;
}
int main()
{
   Student ans = fun();
   cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
   return 0;
}