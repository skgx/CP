#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int s1=s.find("code");
    int s2=s.find("chef");
    if(s1<s2)
    	cout<<"AC"<<endl;
    	else
    		cout<<"WA"<<endl;
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