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
    int a[n] , temp[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int nz = 0, no = 0 , nt = n-1; 	 
    for(int i=0;i<n;i++){
        if(a[i] == 0 && temp[nz] !=1 ){
            temp[nz] = a[i];
            nz++; no++;
            // cout << "if"<<endl;
        }
        else if(a[i]==0 && temp[nz]==1 && temp[no] !=2){
            temp[no] = temp[nz];
            temp[nz] = a[i];
            no++; nz++;
            // cout<<"1st else if"<<endl;
        }
      
        else if(a[i]==1 && (temp[no]!=0 || temp[no]!=2)){
            temp[no] = a[i];
            no++;
            // cout<<"2nd else if"<<endl;
        }
        
        else if(a[i]==2){
            temp[nt] = a[i];
            nt--;
            // cout<<"Last else if"<<endl;
        }
    }     
    for(int i=0;i<n;i++ ) cout << temp[i] << " ";   	
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