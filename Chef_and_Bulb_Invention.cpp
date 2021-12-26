#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n,p,k;
    cin>>n>>p>>k;

    int d=0,c=0;
    while(c!=p){
    for(int i=0;i<n;i++){
        if((i%k)==c)
        d++;
    }
    c++;
    }
    cout<<c<<endl;
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
