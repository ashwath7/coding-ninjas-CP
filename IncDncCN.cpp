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
    // int a = 10;
    // cout<< a++ <<endl;
    // cout<< ++a<<endl;
    // cout<< a--<<endl;B
    // cout<<--a; 
    //     int x = 10;
    // int y = 20;
    // if(x++ > 10 && ++y > 20 ){
    // cout << "Inside if ";
    // } else{
    // cout << "Inside else ";
    // }
    // cout << x << " "<< y;
//     int i = 1;
// while(i < 3) {
//     int j = 0;
//     while(j < 5) {
//         j++;
//         if(j == 3) {
//             continue;
//         }
//         cout << j << " ";
//     }

// }    i++;
       int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
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