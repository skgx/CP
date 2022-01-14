#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;


int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
  int count=0;

 for(int i=1;i<=d;i++){
      if(i%k==0||i%l==0||i%m==0||i%n==0)
      count++;
  }
  cout<<count<<endl;
}