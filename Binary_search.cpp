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
int binarySearch(int l , int h , int x , int a[]) {
	while(l<=h){
		int mid = (l+h)/2;
		if(x ==a[mid]) return mid;
		else if(x > a[mid]) l = mid + 1;
		else if(x < a[mid]) h = mid - 1;
	}
	return -1;
}

void solve(){
    int n  , x; cin >> n>> x;
    int a[n] ; 
    for(int i = 0 ;i<n;i++) cin >> a[i];
    int ans = binarySearch(0,n-1,x,a);	
    cout << ans ; 
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