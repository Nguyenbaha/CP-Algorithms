

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
#define show(x) cout << (#x) << " is " << (x) << endl
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
#define bit(i,j) ((i>>j) & 1)
// __gcd(n,0) = n;
const int N = 1e6+5 ;
#define see(x) cout << #x << " = " << x << ' '
#define seen(x) cout << #x << " = " << x << '\n'

				//(////(/((//#//%%%&&&&&&&&&%%%%%%##############((/,,,,*((((((((((((#######(#%####
				//////////(//(//%#######&%#%%%%%%%%&%%##########(,,,,,(((((((((((#########%%######
				///////////////#%%######%#########%%&%#########(,,,,*/(#/(((##(#########%#########
				//#######%%%%###########%############%%%%%%%%%/,,/((###((#####((/(#/##%###########
				//%%%%###%%%%%%%%#########################%#(#########################%%%%%%%%%%##
				//((######&&%%%%%%%#####((#((####(#(##%%%%%%%###########%%###(%%%%%%#############%
				//########&%&&&%%%%%%%%%%&&&&&&&&&&&&&%%#%%%%%#%%%%%%%%%%#########%%%%%%#%(##(((((
				//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##%%%%#(((///**////((#%%%%%%#(#####
				//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%%%#(#%&%#(//////*/**/////((##(%%#######
				//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%&%#(#%%%(////****////*////(((##(%####(((
				//###############&(#################(%%%%&&#%(%%#((//**/*//*//////*///((#(%%##((((
				//###############%###############(((%%%%%&%((%%##/////////////////////(((#(%####((
				//#%%%%&&&%&%%%%%#%%%##%%#%######(*%%%%%%#((#%&%%####%##((//////(((######%(%###(//
				//&%&%%&&&&%%%%%%(%%&&&%%%%%%%%#/,/%%&&%%//#%%(((((((((((((////((((((((((##%#/,*,/
				//*/**,****((####((###(((*********#%#%%#(//(#%#%%(#%%(#((((///(((#(%%%(%#(*##((/((
				///*//*****%%(#(#(#((#(((*******,(#&&###(/(((#(((((((((((///*/((((((((((((/%%#%###
				//**///**%%&%####(#((((%%%**(,,##(//#&((((((#(//////////*///**//((((//(((((%%%#%%%
				//*////*///*,,*#(&&&&&%%%/#*,,***/*////((/(((#/////////(///****/(///////((%%%%%%%%
				//*,,*****/(/****,*,,,*,***,,*******///**/((#((//////((//////////////////(#%#%%%%%
				//***,*,,*,*///***,*,/****,,,*,,**/**//*/#(//((/////(///(((((((((///////((###((/(#
				//,,,,,,**,,*////***//((**,,,**,****/*/(/((#((#(((((%((((#((/((//((((///((((###(//
				//,,,****,*,,*****/*(//*******,*****,//////(//#(((((///#####%#%#(%(///(#((((((((((
				//***********//////(/*/(**********/*///%%%/////(((/(////(((((((#(///((////(((((/,,
				//***/*//////**/*/*/%///****/////****/%%%%**//((////(//////((#///////(//#((###(//*
				//,*,*******///(//####///*(///////***(((#((/////((////(#((#////*/***/**/**********
				//,*,,******/*/((((((/*,**/*******/*****((//////////////#/****//(/*****(/(####(#(/
				//,,,,*********,*////(*,***********/***////////////////******/%#((//***/*(####((#(
				//***,********/**///((*,*************(//*////////////******************/*//*******
				//*/*,********(***,**/****///*///(#%%%#*/**/////////*//**************/*/*/****,***
				//*,,,*,,,****,,*****/*/*,********%%%%%#//////////////////********/((//***,*******
				//,,,,**,*********/***,*,**********%####%#*//***//////////////*****#(#///******,**
				//(*,,****//((#**************,******#####(#**/***/*///////////////**(/(/**********


 	const ll MULTI_TESTS = 0;
	// here
	
	void solve()
{
	int a[4][4] ;
    int b[4][4] ;
    for(int i=1;i <= 3; ++i)
       for(int j=1;j<= 3; ++ j)
            b[i][j] = 1;

    fore(i,1,4)
        fore(j,1,4)
        {
            cin >> a[i][j];
            a[i][j] %= 2 ;
        }
    fore(i,1,4)
        fore(j,1,4)
        {
            if(a[i][j])
            {
                b[i][j] ^= 1;
                b[i-1][j] ^= 1;
                b[i][j-1] ^= 1;
                b[i+1][j] ^= 1;
                b[i][j+1] ^= 1;
                // a[i+1][j+1] ^= 1;
                // a[i-1][j-1] ^= 1;
                // a[i+1][j-1] ^= 1;
                // a[i-1][j+1] ^= 1;
            }
        }
    fore(i,1,4)
        {
            fore(j,1,4)
                {
                  cout << b[i][j];

              }
            cout << endl;
        }
    
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
            solve();
	    cout << endl ;
        }
    } 
    else 
    {
         solve();
    }
    return 0;
}

