#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;



int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  string a,b;
  cin>>a>>b;
  string c="";
  for(int i=0;i<a.length();i++)
  {
      if(a[i]==b[i])
      c+='0';
      else
      c+='1';
  }
  cout<<c<<endl;
  return 0;
}