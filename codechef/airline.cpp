#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;


void solve()
{

  
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if((a+b)<=d && c<=e)
    	cout<<"yes"<<endl;
    else if((b+c)<=d && a<=e)
    	cout<<"yes"<<endl;
    else if((c+a)<=d && b<=e)
    	cout<<"yes"<<endl;
    else
    	cout<<"no"<<endl;

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