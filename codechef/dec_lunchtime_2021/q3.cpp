#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
	int n;
    cin>>n;
    char s[n];
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        	cin>>s[i];
        	if(s[i]=='0')
        		zero++;
        	else
        		one++;
    }
    if(zero==0||one==0)
    	cout<<0<<endl;

    // else if(one>=zero){
    // 	int ans=0;
    // 	int temp=min(zero,one);
    // 	if(zero==one)
    // 		temp=zero;
    // 	for(int i=2;i<temp;i+=2)
    // 		ans+=2;

    // 	cout<<ans<<endl;
    // }
    // else if(one<zero){
    // 	int ans=0;
    // 	int temp=min(zero,one);
    	
    // 	if(zero==one)
    // 		temp=zero;
    // 	for(int i=2;i<temp;i+=2)
    // 		ans+=2;

    // 	cout<<ans+1<<endl;
    // }
   
    else if(zero>=one){
    	cout<<one-1<<endl;

    }
    else if(zero<one){
    	cout<<zero-1<<endl;
    }
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