#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;


int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   string s;
   cin>>s;
   int upper=0,lower=0;

   for(int i=0;i<s.length();i++){
       if(s[i]>='A'&& s[i]<='Z')
        upper++;
        else
        lower++;
   }
   if(lower>=upper)
    {
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       cout<<s<<endl;
    }
    else
    {
        
       transform(s.begin(), s.end(), s.begin(), ::toupper);
       cout<<s<<endl;
    }
    return 0;
}