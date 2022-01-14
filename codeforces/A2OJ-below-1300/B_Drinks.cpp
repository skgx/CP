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
  int p=n;
  int sum=0;
  while(n--){
      int n1;
      cin>>n1;
      sum+=n1;
  }
  cout<<(double)sum/p<<endl;
}