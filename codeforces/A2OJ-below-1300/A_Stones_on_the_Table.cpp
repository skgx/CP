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
  string s;
  cin>>s;
  int c=0;
  for(int i=0;i<s.length();i++){
      if(s[i]==s[i+1])
      c++;
  }
  cout<<c<<endl;
}