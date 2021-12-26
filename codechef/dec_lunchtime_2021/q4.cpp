#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;
//TLE OCCURS BCOZ O(N^2) SOLUTION
void solve()
{
    ll a,b;
    cin>>a>>b;
 
    string s;
    cin>>s;

    while(b>0){
    	ll temp=b-1;
    	string t=s.substr(0,b);
    	reverse(t.begin(),t.end());
    	s.erase(0,b);
    	s.insert(0,t);
    	b--;

    }
    cout<<s<<endl;
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