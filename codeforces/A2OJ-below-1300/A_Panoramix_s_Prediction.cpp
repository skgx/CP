#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

int isPrime(int n){

    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>0)
    return 0;
    else
    return 1;
}

int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 int a,b;
 cin>>a>>b;
 for(int i=a+1;i<=b;i++){
     if(isPrime(i)==1){
         if(i==b){
     cout<<"YES"<<endl;
     return 0;
     }else{
         cout<<"NO"<<endl;
         return 0;
     }
     }
     else if(i==b){
         cout<<"NO"<<endl;
         return 0;
     }
 }
 
 return 0;
}