#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[3];
    int minm=INT_MAX;
    int maxm=INT_MIN;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        minm=min(minm,a[i]);
        maxm =max(maxm,a[i]);
    }
    cout<<minm<<" "<<maxm;
}