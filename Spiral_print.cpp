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
    int n , m ; cin >> n >> m ;
    int a[n][m];
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin >> a[i][j];
    	}
    }
    int rs = 0 , re = n-1 , cs = 0 , ce = m-1 , c = 0;
   if(n==1){
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< a[i][j] <<" ";
        }
    }
   } 
   else if(m==1){
     for(int j =0 ;j<m;j++){
        for(int i = 0; i<n;i++){
        cout<<a[i][j]<<" ";
       }
     }
   }
   else {
      while(c != (n*m)){
     for(int i = cs ; i<=ce ; i++){
        c++;
        cout<<a[rs][i]<<" ";
    }
    rs++;
    
    for(int i = rs ; i <=re ; i++){
        c++;
        cout<<a[i][ce]<<" ";
    }
    ce--;
    
    if(rs<=re){
         for(int i = ce ; i>=cs ; i--){
        c++;
        cout<<a[re][i]<<" ";
      }
    }
    re--;
    
     if(cs <= ce){
         for(int i = re ; i>=rs ; i--){
        c++;
        cout<<a[i][cs]<<" ";
        }
     }
    cs++;
    
  }
   }
  
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