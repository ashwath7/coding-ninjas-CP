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
    int n , m ; cin >> n >> m;
    int a[n][100];
    for(int i=0;i<n;i++){
    	for(int j = 0;j<m;j++){
    		cin >> a[i][j];
    	}
    }
    int row_max = INT_MIN, row_sum , row_no;
    int col_max = INT_MIN, col_sum, col_no;
    for(int i = 0;i<n;i++){
         row_sum = 0;
    	for(int j = 0 ;j<m;j++){
    		row_sum +=a[i][j];
    	}
        if(row_sum > row_max){
            row_max = row_sum;
            row_no = i;
        }
    }
    // cout << row_no<<" "<<row_max << endl;
   for(int j = 0 ;j<m ; j++){
      col_sum = 0;
      for(int i = 0 ; i<n ; i++){
         col_sum +=a[i][j];
        }   
      if(col_sum > col_max){
           col_max = col_sum;
           col_no = j; 
       }
   }
   // cout << col_no << " " << col_max;
   if(n==0 && m == 0) cout <<"row 0"<<" "<<-2147483648;
  
   else  if(row_max >=col_max) cout<<"row " <<row_no<<" "<<row_max ;
  
   else {
   cout <<"column "<< col_no << " " << col_max;
     
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