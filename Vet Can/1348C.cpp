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
#define bit(p,x) ((x>>p) & 1)
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


			const ll MULTI_TESTS = 1;
	// here
	
			void unstoppable()
		{
	
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  sort(all(s));
  
  if (s[0]!=s[k-1]){
    cout<<s[k-1]<<endl;
    return;
  }
  cout<<s[0];
  
  if (s[k]!=s[n-1]){
    for (int i=k;i<n;i++)
      cout<<s[i];
  }
  else{
    
    for (int i=0;i<(n-1)/k;i++)
      cout<<s[n-1];
  }
  cout<<endl;



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


