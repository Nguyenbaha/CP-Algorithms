
 
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
#define ll long long int 
const int maxn= 1000005;
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
 
 
      const ll MULTI_TESTS = 1;
  // here
  // 
 
      void unstoppable()
{
           
       int n,l,r;
       string s;
       cin >> n >> s;
       if(count(all(s),'a') == count(all(s),'b'))
       {
            cout << 1<<' '<<n<<endl;
            return ;
       }
       fore(i,0,n)
       {
            fore(j,i+1,n)
            {
                
                    int a=0,b=0;
                    fore(k,i,j+1)
                    {
                        if(s[k] =='a') a++;
                        else b++;
                    }
                    if(a==b)
                    {
                        cout<<i+1<<' '<<j+1<<endl;
                        return;
                    }
                    else
                        continue ;
                
                
            }
       }
       cout <<"-1"<<' '<<"-1"<<endl;

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
            cout<<endl;
        }
    } 
    else 
       {
        unstoppable();
       }
    return 0;
}