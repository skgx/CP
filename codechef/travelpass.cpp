#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int cost=0;
    for(int i=0;i<s.length();i++){
    	if(s[i]=='0')
    		cost+=a;
    	if(s[i]=='1')
    		cost+=b;
    }
    cout<<cost<<endl;
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