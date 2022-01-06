#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;



int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int a=5,p=0,q=0;

  int arr[5][5];
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          cin>>arr[i][j];
          if(arr[i][j]==1){
              p=i;
              q=j;
          }
                
      }
  }
  cout<<abs(2-p)+abs(2-q)<<endl;
}