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
	 cout<<ceil(8761.53)<<endl;; 
	long n ; char c ; 
    cin >> n >> c;
    double ts;
    double hra = 0.2*n;
    double da = 0.5*n;
    double pf = 0.11*n;
    if(c == 'A'){
        ts = n + hra + da + 1700 - pf;
        cout<<round(ts);
    }
    else if(c == 'B'){
        ts = n + hra +
         da + 1500 - pf;
        cout<<round(ts);
        
    }
    else  {
         ts = n + hra + da + 1300 - pf;
        cout<<round(ts);
        
    }
}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("display.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}