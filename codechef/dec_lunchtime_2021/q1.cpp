#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b)>c)
    	cout<<"TRAIN"<<endl;
    else if((a+b)<c)
    	cout<<"PLANEBUS"<<endl;
    else
    	cout<<"EQUAL"<<endl;
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