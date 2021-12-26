#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void fun(vector<ll> &t, ll n)
{
	ll i,j=31;
	string str="";
	while(n>0)
	{
		str+=to_string(n%2);
		n/=2;
	}
	ll n1=str.size();
	for(int i=0;i<n1;i++)
	{
		if(str[i]=='1')
		{
			t[j]+=1;
		}
		j--;
	}
} 

int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll t=1,i,j;
  cin >> t;
  while (t--)
  {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];

  vector<ll> r(32,0);

   for( i=0;i<n;i++)
  {
	fun(r,a[i]);
   }

  ll result=0;
  for(i=0;i<32;i++)
{
	if(r[i]==0)
		continue;
     else if(r[i]%k==0)
     {
     	result+=(r[i]/k);
     }
     else
     {
     	result+=(r[i]/k +1);
     }
     }
     cout<<result<<endl;
   }
   return 0;
}