#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a= new int;
    *a = 10;
    cout<<*a<<endl;
    delete a; // delete kore dicchi dinamic variable k
    float *b = new float;
    *b = 10.3;
    cout<<*b<<endl;
}