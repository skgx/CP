#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;



int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  vector<int>arr(n);

  for(int i=0;i<n;i++)
  cin>>arr[i];

  int min_index=-1,max_index=-1;

  int temp_min=INT_MAX,temp_max=INT_MIN;

  for(int i=0;i<n;i++)
  {
      if(arr[i]>temp_max){
          temp_max=arr[i];
          max_index=i;
      }
      if(arr[i]<=temp_min){
          temp_min=arr[i];
          min_index=i;
      }

  }
  //cout<<min_index<<" "<<max_index<<" "; 
  if(max_index>min_index)
  cout<<max_index+n-1-min_index-1<<endl;
  else
  cout<<max_index+n-1-min_index<<endl;

  return 0;
}