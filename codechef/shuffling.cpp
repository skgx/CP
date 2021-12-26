#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]%2==0)
        even++;
      else
        odd++;
    }
    if(even==n)
      cout<<1<<endl;
    else if(even )

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