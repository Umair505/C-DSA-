#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
     string name;
     int roll;
     int marks;
};
int main()
{
  int n; cin>>n;
  Student a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i].name>>a[i].roll>>a[i].marks;
  } 
  Student minm;
  Student maxm;
   minm.marks = INT_MAX;
   maxm.marks =INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(a[i].marks<minm.marks){
        minm = a[i];
    }
    if(a[i].marks> maxm.marks){
        maxm = a[i];
    }
  }

   cout<<"Minimum Number: "<<minm.name<<" "<<minm.roll<<" "<<minm.marks<<endl;
   cout<<"Maximum Number: "<<maxm.name<<" "<<maxm.roll<<" "<<maxm.marks<<endl;
  
   return 0;
}