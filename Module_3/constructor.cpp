#include<bits/stdc++.h>
using namespace std;
class Student
{ 
public:
   int roll;
   int cls;
   double cgpa;
   Student(int r,int c,double g)
   {
     roll = r;
     cls = c;
     cgpa = g;
   }
 /* same name rakhte chaile arrow sign dia difference kore access korteche  
  Student(int roll,int cls,double cgpa)
    {
        this->roll=roll;
        this->cls = cls;
        this->cgpa=cgpa;
    }
*/
};
int main()
{
   Student satyam(161,11,4.63);
   cout<<satyam.roll<<" "<<satyam.cls<<" "<<satyam.cgpa<<endl;
   Student Moinul(162,10,4.5);
   cout<<Moinul.roll<<" "<<Moinul.cls<<" "<<Moinul.cgpa<<endl;
   return 0;
}