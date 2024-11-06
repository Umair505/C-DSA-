#include<bits/stdc++.h>
using namespace std;
class student
{
public:
  int id;
  char name[101];
  char section[10];
  int marks;
};
int main()
{
   int n; cin>>n;
   for(int i=0;i<n;i++)
   {
    student a,b,c;
    //student a
    cin>> a.id;
    getchar();
    cin>> a.name;
    getchar();
    cin>>a.section;
    getchar();
    cin>> a.marks;
    
    //studen b
    cin>>b.id;
    getchar();
    cin>>b.name;
    getchar();
    cin>>b.section;
    getchar();
    cin>>b.marks;
    //Student c
    cin>> c.id;
    getchar();
    cin>> c.name;
    getchar();
    cin>> c.section;
    getchar();
    cin>> c.marks;
    if(a.marks>=b.marks && a.marks>=c.marks)
    { 
        cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
    }
    else if(a.marks<=b.marks && b.marks>=c.marks)
    { 
        cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
    }
    else{
    cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
   }
   }
   
   return 0;
}