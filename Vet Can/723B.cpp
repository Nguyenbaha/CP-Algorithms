
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
// test chet : ()aaa -> 3 0

			const ll MULTI_TESTS = 0;
	// here
		
		bool ok ( char c)
		{
			return (c>='a' && c<='z') || (c>='A' && c<='Z') ;
		}
      
			void unstoppable()
		{
	
			string s;
			int n;
			cin >> n;
			cin >> s;
			int ans1= 0 , ans2 = 0;
			int cnt = 0 ;
			
			bool is =  false ;
			fore(i , 0 , n)
			{
				if ( ok(s[i]))
				{
					cnt ++ ;
					//continue ;
				}
				else if(s[i]=='(')
				{
					if( cnt )
					{
						ans1  = max( ans1, cnt) ;
					}
					cnt = 0 ;
					is = true ;

				}
				else if(s[i] == ')')
				{
					if( cnt )
					{
						ans2 ++ ;
					}
					cnt = 0 ;
					is = false ;
				}
				else // case : '_'
				{
					if(is && cnt)
						ans2 ++;
					else
						ans1 = max(ans1 , cnt) ;
					cnt = 0 ;

				}
			}
			ans1 = max(ans1 , cnt) ;
				cout << ans1 << ' ' << ans2 ;
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

