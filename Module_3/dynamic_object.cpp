/*
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
int main()
{
   Student Rahim(341,10,4.44);
Student *Karim = new Student(342,5,4.22);
cout<<Karim->roll<<" "<<Karim->cls<<" "<<Karim->gpa;
   return 0;
}
*/
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
Student *fun()
{
    Student *rahim = new Student(162,10,4.22);
    return rahim;
}
int main()
{
   Student *ans = fun();
   cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
   delete ans;
   return 0;
}