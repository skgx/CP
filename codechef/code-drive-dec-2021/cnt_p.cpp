#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;
vector<int>a;
int ans=0;
int n;
void count_peak(){
	for(int i=1;i<n-1;i++){
		if(a[i-1]<a[i] and a[i]>a[i+1])ans++;
		if(a[i-1]>a[i] and a[i]<a[i+1])ans++;
	}
}
void recurse(int i=0){
	if(i==n){
		count_peak();
		return;
	}
	for(auto num:{0,1,2}){
		a[i]=num;
		recurse(i+1);
	}
}
void solve()
{
    cin>>n;
    ans=0;
    a.resize(n);
    recurse();
    cout<<ans<<endl;

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