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
	// fuck: debug tut lol
			void unstoppable()
		{
			string s,re;
			int a,b, cnta,cntb,l,r, cntE;
			cin >> a>>  b>> s;
			cntE = count(all(s),'?');
			cnta = count(all(s),'0');
			cntb = count(all(s),'1');
			// cout<<cntE<<endl;
			// return ;
			if(cntE == 0)
			{
				re = s;
				reverse(all(re));
				if(s!=re)
				{
					cout << -1<<endl;
					return ;
				}
				if(cnta == a && b==cntb)
				{
					cout <<s<<endl;
					return ;
				}
				else
				{
					cout <<-1<<endl;
					return ;
				}
			}
			// 
			l = 0, r = (int)s.size() -1;
			int n  = s.size();
			if(a&1 && b&1)
			{
				cout <<-1<<endl;
				return ;
			}
			// remain:
			cnta = a - cnta;
			cntb = b - cntb;

			// palin le
			while(l < r)
			{
				if(s[l] =='?' && s[r]!='?')
				{
					if(s[r] == '1')
					{
						if(cntb)
						{
							s[l] ='1';
							cntb --;
						}
						else
						{
							cout << -1<<endl;
							return ;
						}
					}
					else
					{
						if(cnta)
						{
							s[l] ='0';
							cnta--;
						}
						else
						{
							cout << -1<<endl;
							return ;
						}
					}
					// end case 1
					l++,r--;
					continue ;
				}
				if(s[l]!='?' && s[r] =='?' )// begin case 2
				{
					if(s[l] =='1')
					{
						if(cntb)
						{
							s[r] ='1';
							cntb--;
						}
						else
						{
							cout<<-1<<endl;
							return;
						}
					}
					else
					{
						if(cnta)
						{
							s[r] ='0';
							cnta--;
						}
						else
						{
							cout << -1<<endl;
							return ;
						}
					}
					// end case 2:
				}
				if(s[l]!= '?' && s[r]!='?')
				{
					if(s[l]!=s[r])
					{
						cout << -1<<endl;
							return ;
					}
				}// end case 3
				l++,r--;
			}


			l =0 , r = (int)s.size()-1;
			ll cnt1=0,cnt0=0;

			while(l <= r)
			{
				if(l==r)
				{
					if(s[l]=='?')
					{
						if(cnta)
						{
							s[l]='0';
						}
						else if(cntb)
						{
							s[l]='1';
						}
						else
						{
							cout << -1<<endl;
							return ;
						}
					}
					break;
				}


				// 
				if(s[l]=='?' && s[r]=='?')
				{
					if(cnta >= 2)
					{
						s[l]='0';
						s[r]='0';
						cnta-=2;
					}
					else if(cntb >= 2)
						{
							s[l] = '1';
							s[r] ='1';
							cntb -=2;
						}
						else
						{
							cout << -1<<endl;
							return ;
						}
						//l++, r--;
				}
				l++,r--;
			}

			cnt1 = count(all(s),'1');
			cnt0 = count(all(s),'0');
			string rev;
			rev = s;
			reverse(all(rev));
			if(rev != s)
			{
				cout << -1<<endl;
							return ;
			}
			if(cnt1 == b && cnt0 == a)
			{
				cout << s<<endl;
			}
			else
			{
				cout << -1<<endl;
							return ;
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
            unstoppable();
           // cout<<endl;
        }
    } 
    else 
       {
        unstoppable();
       }
    return 0;
}
