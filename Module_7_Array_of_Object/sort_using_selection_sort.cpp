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
   for(int i=0;i<n;i++){
    cin>>a[i].name>>a[i].roll>>a[i].marks;
   } 
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i].marks<a[j].marks)//jar marks beshi she age print hobe
        {
            swap(a[i],a[j]);
        }
        if(a[i].marks == a[j].marks)
        {
            if(a[i].roll>a[j].roll){//marks equal hoye gele jar roll choto she age print hobe
                swap(a[i],a[j]);
            }
        }
    }
   }
   for(int i = 0;i < n; i++){
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
   }
   return 0;
}