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
int length(char name[]) {
	   int len = 0;
    for(int i =0 ; name[i] !='\0'; i++){
    	len++;
    }
    return  len;
}
void reverseStringWordWise(char a[]) {
    // Write your code here
    int n = length(a);
    // cout << n;
    for(int i=0;i<n/2;i++) swap(a[i],a[n-i-1]);
    // cout << a << endl;    
    // now reverse each and every word.
    int k = 0 ; int j = 0;
        
    for(int i=0;i<=n;i++){
        if(a[i] == ' ' || a[i]== '\0'){
            k = i-1;
            while(j<k){
                swap(a[j++],a[k--]);
            }
            i++;
            j = i;
        }    
    }   
    
}
void solve(){
    char str[100]; cin.getline(str,100);
    reverseStringWordWise(str);
    cout << str;
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