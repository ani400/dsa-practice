#include <bits/stdc++.h>

#define ll long long
#define ldb long double
#define db double
#define mp make_pair
#define pb push_back
#define F first
#define S second

#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<string>
#define vdb vector<double>
#define vbool vector<bool>
#define vvi vector<vector<int> >
#define mii map<int,int>
#define minheap(x) priority_queue<x,vector<x>,greater<x>>

#define rep(i,a,b) for(int i=a; i<b; i++)
#define repr(i,a,b) for(int i=a; i>=b; i--)
#define all(x) (x).begin() , (x).end()
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it!=a.end(); it++)
#define lb lower_bound
#define ub upper_bound
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

//debug
#define scan(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) {cout<<a[i]<<' ';}cout<<'\n'
#define debug(arr) for(auto x: arr) cout<<x<<" "; cout<<endl;
#define deb(x) cout<< #x <<"="<< x <<endl;
#define deb2(x,y) cout<< #x <<"="<< x <<", "<< #y <<"="<< y<<endl;
#define CHECK cout<<"HERE HAHAAAA"<<endl;


#define endl "\n"
#define PI 3.1415926535897932384626
#define inf 1e18
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL) 
using namespace std;
const int mod = 1'000'000'007;




/////////////////////functions for simplicity ///////////////////////////////
// template<typename... T>
// void read(T&... args){
// 	((cin >> args), ...);     // read(x,y,z);
// }                             // any no. of arguements)

// template<typename... T>       
// void write(T&&... args){          // && rvalue reference (new for c++)            //write(x,y,z,cc);
// 	((cout << args<<" " ), ...);          // any no. of arguements)
// }

int mpow(int base, int exp);        //pow fumction O(logn) time
//////////////////////////////////////////////////////////////////////////




void solve(){
   string s;
   cin>>s;
   int n= s.size();
   int ans=0;
   int count=0;
   map<char,int>mp;

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
      for(auto x:mp){
         if(x.second>=2){
            ans++;
         }
         else if(x.second==1){
            count++;
         }
      }
    ans+=count/2;

   cout<<ans<<endl;
}


int32_t main() {
     fast_io;

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll t=1;
     cin >> t;	
   			
    while(t--)
		solve();
   return 0;
}