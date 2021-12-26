#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;
//time is O(N)
void solve()
{
    ll a,b;
    cin>>a>>b;
 
    string s;
    cin>>s;

    string ans="";
    int i=0,j=b-1;
    while(i<j){
      ans+=s[i];
      ans+=s[j];
      i++;
      j--;
    }
    if(i==j) ans+=s[i];
    reverse(ans.begin(),ans.end());
    ans+=s.substr(b,a);
    cout<<ans<<endl;
}

int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}