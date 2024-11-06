#include<bits/stdc++.h>
using namespace std;
/*
1st dinamic array declare korbo
2nd 1st dinamic array k arekta dinamic array te store korbo
3rd 1st dinamic array k delete kore dibye arekta onno size er array nibo 1st tar moddhe(j size er dorkar)
4th 3rd dinamic array er moddhe 2nd array store korbo
5th 2nd array delete kore dibo.Tarpor baki gula store kore loop chalai print korbo
*/
int main()
{
    int *a = new int[3];
    int *b = new int[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
        b[i] = a[i];
    }
   delete[]a;
   a = new int[5];
    for(int i=0;i<3;i++)
    {
        a[i] = b[i];
    }
    delete[]b;
    a[3] = 4;
    a[4] = 5;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}