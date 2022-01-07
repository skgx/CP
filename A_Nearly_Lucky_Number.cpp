#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;



int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  ll n=1;
  cin >> n;
  ll c=0;

  while(n>0){
      ll d=n%10;
      if(d==4 || d==7)
      c++;
      n/=10;
  }
  if(c==4 || c==7)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

}