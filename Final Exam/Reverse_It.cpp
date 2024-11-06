#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
     string name;
     int cls;
     string section;
     int id;
};
int main()
{
   int n; cin>>n;
   student s[n];
   for(int i=0;i<n;i++)
   {
    cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].id;
   }
   
   for(int i=0;i<n/2;i++){
    swap(s[i].section,s[n-i-1].section);
   }
   for(int i=0;i<n;i++)
   {
    cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<endl;;
   } 
   return 0;
}