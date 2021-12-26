#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
    	int l;
    	cin>>l;
    	arr.push_back(l);
    }
    if(is_sorted(arr.begin(), arr.end())){
        	cout<<0<<endl;
        	return;
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]-arr[0]<<endl;



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