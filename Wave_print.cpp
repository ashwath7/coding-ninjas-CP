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
void wavePrint(int a[][100], int n, int m)
{
    //Write your code here
    for(int  i = 0 ; i < m ; i++ ){
        if(i%2==0){
            for(int j = 0;j<n;j++) cout <<a[j][i]<<" ";
        }
        else {
            for(int j = n-1 ; j>=0 ;j--) cout << a[j][i] << " ";
        }
    }
}
void solve(){
    int n , m ; cin >> n >> m;
    int a[n][100];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    wavePrint(a,n,m);
   
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