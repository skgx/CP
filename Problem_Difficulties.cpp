#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

// int same(int arr[4]){
//  int s[4]={0},c=0;
//  for(int i=0;i<3;i++)
//  {
//      for(int j=i+1;j<4;j++){
//          if(arr[i]==arr[j])
//          s[i]++;
//      }
//  }
//  for(int i=0;i<4;i++)
//  {
//   if(s[i]>0)
//   c++;
//  }

//  return c;
// }
int countDistinct(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            res++;
    }
   cout<<res<<" ";
    return res;
}

void solve()
{
   int arr[4];
   for(int i=0;i<4;i++)
   cin>>arr[i];
   int res=countDistinct(arr,4);
   if(res==4 || res==3)
   cout<<2<<endl;
   if(res==2 )
   cout<<1<<endl;
   if(res==1)
   cout<<0<<endl;

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