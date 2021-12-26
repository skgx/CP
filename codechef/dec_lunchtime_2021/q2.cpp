#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    ll n,q;
    cin>>n;
    vector<int>arr;
    for(ll i=0;i<n;i++){
        	cin>>q;
        	arr.push_back(q);
    }

    sort(arr.begin(),arr.end());
    ll temp=arr[n-1]-arr[0];
    //ll size=n-1;

    // while(arr[n-1]==arr[size-1] && ){
    // 	size--;
    // }
    temp=temp*arr[n-2];

    cout<<temp<<endl;
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