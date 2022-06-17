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
int secLargest(int a[], int n){
    int max_val_1 = INT_MIN;
    int max_val_2,cnt = 0;
     for(int i=0;i<n;i++) {
        cin >> a[i];
        cnt++;
        if(a[i] > max_val_1){
            max_val_2 = max_val_1;
            max_val_1 = a[i];
            
        }
        if(a[i] > max_val_2 && a[i] != max_val_1){
            max_val_2 = a[i];
        }
        // if(a[i] == max_val_1 && cnt==n) cnt = 1;
     }
     // cout << max_val_1 <<" " << max_val_2;
     // if(cnt == 1 || cnt==0) cout<< -2147483648;
    return max_val_2;
}     
void solve(){
    int n ; cin >> n;
    int a[n] ;
    
  
      int ans  = secLargest(a,n);
     cout << ans;
     
    	
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