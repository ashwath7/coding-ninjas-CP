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
    int  n ; cin >> n;
    int cnt = 0 , second_largest =  0 , max = -9999,max2;
    int val ;

    for(int i =1 ; i<=n ;i++){
    	cin>>val ; 
    	cnt++;
    	if(val > max){
    		max2 = max;
    		max = val;
           

    	}
    	if(val >max2 && val < max){
    		max2 = val;
    	}
    	if(val == max && n==2){
    		cnt = 1;
    	}

    }
    if(cnt == 0 || cnt==1) cout<< -2147483648;
    else {
    	cout<<max2;
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