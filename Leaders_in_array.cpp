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
    int a[n];
    int b[n] ; 
    for(int i = 0;i<n;i++) cin >> a[i];
    int max_rt = a[n-1];
    int j = 1;
    for(int i = n-2; i>=0 ; i--){
    	if(a[i] > max_rt){
    		max_rt = a[i];
    		b[j++] = max_rt;
    	}
    }	
    b[0] = a[n-1];
    for(int i = 0 ; i<j;i++)cout << b[j-i-1] <<" ";
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