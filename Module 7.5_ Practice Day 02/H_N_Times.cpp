#include<bits/stdc++.h>
using namespace std;
void fun(int test)
{
    while(test--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   int t;
   cin>>t;
   fun(t);
   return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t; cin>>t;
//    while(t--)
//    {
//     string s;
//     int n; cin>>n>>s;
//     for(int i=0;i<n;i++){
//         cout<<s<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;
// }