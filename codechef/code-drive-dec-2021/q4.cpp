#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

string xoring(string a, string b, int n){
	
	string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int skg[n]={0};
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='1')
    	sum++;
    	skg[i]=sum;
    }
    int temp=n-k;
   
    int p=temp+1;

    int ans[k];
    ans[0]=skg[p-1];
    for(int i=1;i<k;i++)
    	ans[i]=skg[i+p-1]-skg[i-1];

    int c=0;
    for(int i=0;i<k;i++)
    	if(ans[i]%2==1)
    		c++;

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