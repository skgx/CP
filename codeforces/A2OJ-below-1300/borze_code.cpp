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
  string as="";
  for(int i=0;i<s.length();i++){
        if(s[i]=='-'&& s[i+1]=='-'){
        as+='2';
        i++;
        }
        else if(s[i]=='-'&& s[i+1]=='.'){
        as+='1';
        i++;
        }
        else if(s[i]=='.')
        as+='0';

        cout<<"saurabh";
  }

  cout<<as<<endl;
}