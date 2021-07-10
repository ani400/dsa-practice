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
  int x1,y1,x2,y2,fx,fy;
  cin>>x1>>y1>>x2>>y2>>fx>>fy;
  int ans = abs(x1-x2) + abs(y1-y2);
  if(x1!=x2 && y1!=y2) {
    cout<< ans <<endl;
    return;
  }
  int corr=0;
  if(x1==fx || x2==fx){

    int miny=min(y1,y2);
    int maxy= max(y1,y2);
   if(fy >miny && fy<maxy){
      ans+=2;
   }
    
  } else if(y1==fy || y2==fy){

    int minx=min(x1,x2);
    int maxx= max(x1,x2);
   if(fx>minx && fx<maxx){
      ans+=2;
   }
   
  
    
  }


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







 int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}