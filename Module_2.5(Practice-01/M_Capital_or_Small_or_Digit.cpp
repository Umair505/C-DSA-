#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>='a' && x<='z') cout<<"ALPHA"<<endl<<"IS SMALL";
    else if(x>='A' && x<='z') cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else cout<<"IS DIGIT";
    
}