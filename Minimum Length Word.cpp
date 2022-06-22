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
    char a[100] ; cin.getline(a,100);
    int ind = 0 , cnt = 0;
    int min_len = INT_MAX;
    int min_ind =0;
    for(int i = 0 ;i<=strlen(a);i++){
    	
    	if(a[i]==' ' || a[i] =='\0'){
            ind = i;;
    		if(cnt < min_len){
                min_len = cnt;
                min_ind = ind;
            }
            cnt = -1;
    	}
        cnt++;
    }
    // cout << min_len << " "<<min_ind-min_len<<endl;
    int v = min_ind - min_len;
    int c = min_len;
    while(c>0){
        cout << a[v++];
        c--;
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