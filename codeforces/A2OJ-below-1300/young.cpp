#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin >> t;
  int p,q,r;
  cin>>p>>q>>r;
  t--;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    p+=a;
    q+=b;
    r+=c;
  }
  if(p==0&&q==0&&r==0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}