#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vi vector <int>
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define srt(v) sort((v).begin() , (v).end())
# define rvr(v) reverse(srt(v))
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
       ll n;
       cin>>n;
       vector<ll>v(n);
       vector<ll>cnt(32,0);
       ll p=0;
       map<int,int>mp;
       for(ll i=0;i<n;i++){
          cin>>v[i];
          int x= __builtin_clz(v[i]);// binary length of v[i] , ex: 7(111)=3 , 3(11)=2, 9(1001)=4
          
          if(mp[x]){
            p+=mp[x];
          }
          mp[x]++;
       }

       cout<<p<<endl;
}

int main() {
   FAST ;
   int t = 1 ;
   cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}