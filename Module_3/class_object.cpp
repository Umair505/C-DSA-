#include<bits/stdc++.h>
using namespace std;
class student
{
   public:
   char name[100];
   int roll;
   double cgpa;
};
int main()
{     
    student a,b;
    //full name ba space wala name newar khetre
    cin.getline(a.name,100);
    cin >>a.roll>> a.cgpa;
    getchar(); //enter fele dewar jonno nisi
    
    cin.getline(b.name,100);
    cin >>b.roll>>b.cgpa;
    // cin >> a.name >>a.roll>> a.cgpa;
    // cin >> b.name >>b.roll>>b.cgpa;
     
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;
//    student a;
//    a.roll = 14;
//    a.cgpa = 3.95;
//    char tmp[100] = "Moinul";
//    strcpy(a.name,tmp);

   return 0;
}

/* input
Satyam dhar
162 3.8
Moinul Islam
161 3.9
*/