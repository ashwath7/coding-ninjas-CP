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
   for(int i=0;i<n;i++) cin >> a[i];
   
   int m; cin >> m;
   int b[m];
   for(int i=0;i<m;i++) cin >> b[i];
   
   int size = max(n,m);
   int c[size+1];
   
   int i = n-1, j = m-1 , k = size, carry = 0;  
   while(i!=-1 && j!=-1){
   	 int sum = a[i] + b[j] + carry;
   	 int ia = sum%10;
   	 if(ia == sum){
   	 	carry = 0;
   	 	c[k--] = sum;
   	 }else {
   	 	carry = sum/10;
   	 	c[k--]  = ia;
   	 }
   	 i--; j--;
     // if(i == -1 || j== -1) break;
   }
   c[0] = carry;
   cout << i << " "<< j << endl;
   if(i!=-1){
   	int c1 = 0;
   	while(i>=0){
   		int s = a[i] + carry;
   		int ia = s%10;
   		if(ia == s){
   			c1 = 0;
   			c[k--] = s;
   		}else {
   			c1 = s/10;
   			c[k--] = ia;
   		}
   		i--;
   	}
   	c[0] = c1; 
   }
   if(j!=-1){
    int c1 = 0;
    while(j>=0){
        int s = b[j] + carry;
        int ia = s%10;
        if(ia == s){
            c1 = 0;
            c[k--] = s;
        }else {
            c1 = s/10;
            c[k--] = ia;
        }
        j--;
    }
    c[0] = c1; 
   }
   
   for(int i = 0 ;i<size+1;i++) cout << c[i] << " ";
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