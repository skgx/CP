#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int arr1[3];
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    int arr2[3];
     for(int i=0;i<3;i++){
        cin>>arr2[i];
    }

    int a=0,b=0;
    if(arr1[0]>arr2[0])
    a++;
    else
    b++;
   if(arr1[1]>arr2[1])
    a++;
    else
    b++;
    if(arr1[2]>arr2[2])
    a++;
    else
    b++;

    if(a>b)
    cout<<"A"<<endl;
    else
    cout<<"B"<<endl;

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