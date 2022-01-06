#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;



int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  ll t;
  cin >> t;
  for(ll i=t+1;;i++){
     int a=i%10;
     int b=(i%100)/10;
     int c=(i%1000)/100;
     int d=(i%10000)/1000;
     if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
         cout<<i<<endl;
         return 0;
     }
  }
}