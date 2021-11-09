# CP-Algorithms
Đây là những bài mình còn lưu lại trong quá trình làm việc với CP ------------- NgNgNg ------------
Template 


// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (int i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (int i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 200005;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<pii> vii;
typedef vector<string> vs;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
#define bit(i,j) ((i>>j) & 1)
// __gcd(n,0) = n;
#define see(x) cout << #x << " = " << x << ' '
#define seen(x) cout << #x << " = " << x << '\n'

const ll MULTI_TESTS = 1;



	// here
	
			void unstoppable()
		{
	


		}



	// main

		signed main()
{
    		 std::ios::sync_with_stdio(false);
   		 cin.tie(0);cout.tie(0);
  			 if (MULTI_TESTS)
  			 {
       			 ll Q;
       			 cin >> Q;
        			 while (Q--) 
					 {
           			 unstoppable();
       			 }
    		} 
   		 else 
      	 {
        		unstoppable();
      	 }
   		 return 0;
}







// fast pow
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}



// DSU
	struct DSU{
    int x[1006];
    void init(int n)
    {
    	for(int i=1;i<=n;i++)
			x[i] = i;
    }
    
  
    int find(int u){
        if (x[u]==u) return u;
        return x[u] = find(x[u]);
    }
    bool  join(int a,int b){
        int ra = find(a);
        int rb = find(b);
        if(ra == rb)
        	return false;
        x[ra]=rb;
        return true;
    }
    bool same(int A, int B)
	{
		return find(A) == find(B);
	}
} DSU[2];
 
//
	
	
 
