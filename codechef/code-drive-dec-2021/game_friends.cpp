#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b){
    	if((a+c)<b){
    		if((a+c+d)<b)
				cout<<'S'<<endl;
				else
				cout<<'N'<<endl;
    	}
    	else{
    		if((a+c)<(b+d))
    			cout<<'S'<<endl;
    		else
    			cout<<'N'<<endl;
    	}
    		
    }
    else
    {
    	if((b+c)<=a)
    	{
    		if((b+c+d)<=a)
    			cout<<'N'<<endl;
    		else
    			cout<<'S'<<endl;
    	}
    	else{
    		if((b+c)<=(a+d))
    			cout<<'N'<<endl;
    		else
    			cout<<'S'<<endl;
    		
            }
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