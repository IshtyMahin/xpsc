// max sum sub-array of size k

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;cin>>k;
    int j=0,s=0,mx=0;
    for(int i=0;i<n;i++){
       s+=v[i];
       if(i-j+1==k){
           mx = max(mx, s);
           s -= v[j];
           j++;
       }
    }
    cout<<mx<<endl;
}