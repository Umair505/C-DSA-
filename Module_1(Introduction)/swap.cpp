#include<iostream>
#include<algorithm>
using namespace std;
#include<utility>
// void swap(int *x,int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     // int a,b;
//     // cin>>a>>b;
//     // int temp =a;
//     // a = b;
//     // b = temp;
//     // cout<<"A ="<<a<<" "<<"B = "<<b;
//     int a,b;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }
 // build in function
 int main(){
    int a,b; cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
 }