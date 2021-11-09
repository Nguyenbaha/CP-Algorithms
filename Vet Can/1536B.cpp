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
	int n;
	string s;
	map<int,int> mp;
	string ans="";
	char c;
	cin >> n;
	fore(i,0,n)
	{
		cin >> c;
		mp[c] ++;
		s+=c;
	}
	// a,b,c,d...
	for( char c= 'a'; c <= 'z'; ++c)
	{
		if(!mp[c])
		{
			cout <<c<<endl;
			return ;
		}
	}
	//aa ab ..
	for(char c ='a'; c<= 'z'; ++c)
		for(char cc ='a'; cc<='z'; ++cc)
		{
			string tmp="";
			tmp+=c;
			tmp+=cc;
			if(s.find(tmp)== string::npos )
			{
				cout<<tmp<<endl;
				return  ;
			}
		}
	// aaa aaab...
	for(char i ='a'; i<='z';++i)
		for(char j ='a';j <= 'z'; ++j)
			for(char c='a'; c<='z';++c)
			{
				string tmp ="";
				tmp +=i ;
				tmp +=j;
				tmp +=c;
				if(s.find(tmp) == string::npos)
				{
					cout<<tmp<<endl;
					return ;
				}
			}
}
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

