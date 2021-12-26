#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--){
 int a,b,c,d,e,f;
 cin>>a>>b>>c>>d>>e>>f;
 if((a+b+c)>(d+e+f))
     cout<<1<<endl;
 else
   cout<<2<<endl;
  }

 return 0;
}