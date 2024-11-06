#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n; cin>>n;
   for(int i=0;i<n;i++)
   {
    int m,p; cin>>m>>p;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int flag =0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(a[i]+a[j]+a[k]==p){
                    flag =1;
                    break;
                }
            }
            if(flag==1)break;
        }if(flag==1)break;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   }
   return 0;
}