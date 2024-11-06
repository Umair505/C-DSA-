#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // int minimum= min(a,b);
    // int maximum = max(a,b);
    // cout<<minimum<<" "<<maximum;
    int minimum = min({a,b,c,d});
    int maximum = max({a,b,c,d});
    cout<<minimum<<" "<<maximum;
}
