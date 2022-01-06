#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;


int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1,x;
  cin >> t>>x;;
  char arr[t];
  for(int i=0;i<t;i++)
  {
    cin>>arr[i];
  }

  while(x--){
      for(int i=0;i<t;i++){
          if(arr[i]=='B'&& arr[i+1]=='G'){
              arr[i]='G';
              arr[i+1]='B';
              i++;
          }
      }
  }

  for(char ch:arr)
    cout<<ch;
    cout<<endl;

    return 0;
}