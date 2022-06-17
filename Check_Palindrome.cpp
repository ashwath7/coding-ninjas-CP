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
bool checkPalindrome(char str[]) {
    // Write your code here
    int n = length(str);
    bool is_palindrome = true;
    for(int i=0; i<n/2;i++){
        if(str[i] != str[n-i-1]){
            is_palindrome = false;
            break;
        }
    }
    return is_palindrome;
}

void solve(){
    char str[10] ; cin >> str;
    cout << checkPalindrome(str);
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