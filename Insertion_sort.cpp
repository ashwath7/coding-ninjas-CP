#include<bits/stdc++.h>
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n ; cin >> n;
    int a[n] ; 
    for(int i=0 ;i<n ;i++) cin >> a[i] ; 
    
    for(int i = 1 ; i<n ;i++){
      int x = a[i];
      int j = i-1;
      while(j>=0 && x < a[j]){
         a[j+1] = a[j];
         j--;
      }
      a[j+1] = x;
    }	
    for(int i =0;i<n;i++) cout << a[i] << " ";
}
signed main(){
    ios
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}