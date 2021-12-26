#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    
    int diff=6-(a+b);
    if(diff<=0){
    cout<<0<<endl;
    return ;
    }
    float res=diff/6;
    cout<<(float)res<<endl;
}

int main()
{
  //ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}