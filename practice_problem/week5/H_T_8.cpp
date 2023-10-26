#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n, h;
    cin >> n >> h;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l=0,r=*max_element(all(v));
    ll ans=0;
    while(l<=r){
       ll mid = (l+r)/2;
       ll s=0;
       for(int i=0;i<n;i++){
        if(v[i]>mid)s+=v[i];
       }

       if(s<h){
          ans=mid;
          r=mid-1;
       }
       else l=mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}