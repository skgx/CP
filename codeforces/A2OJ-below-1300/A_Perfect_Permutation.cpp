#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

//given in question that any element in array should not be in its original position (index+1)
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  ll n;
  cin>>n;
  if(n%2!=0){
      cout<<-1<<endl;
      return 0;

  }
  else{
      int arr[n];
      for(int i=0;i<n;i++){
          arr[i]=i+1;
      }

      for(int j=0;j<n-1;j+=2){
          swap(arr[j],arr[j+1]);
      }
      for(int x:arr)
      cout<<x<<" ";
  }
  return 0;
}