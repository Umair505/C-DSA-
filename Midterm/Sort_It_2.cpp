#include<bits/stdc++.h>
using namespace std;
int *sort_it(int x)
{
  int *arr = new int[x];
  for(int i=0;i<x;i++){
    cin>>arr[i];
  }
  sort(arr,arr+x,greater<int>());
  return arr;
}
int main()
{
   int n; cin>>n;
  int *arr= sort_it(n);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
   return 0;
}