
  //
  // Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>>  s;
#define bit(p,x) ((x>>p) & 1)
// __gcd(n,0) = n;
#define see(x) cout << #x << " = " << x << ' '
#define seen(x) cout << #x << " = " << x << '\n'
const ll MULTI_TESTS = 1;
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

// here
// lưu trữ độ dài đoạn 0 max mang âm
struct cmp
{
  bool operator()(pii a, pii b)
  {
     if(a.se-a.fi == b.se-b.fi)
      return a.fi < b.fi;
    else
      return a.se-a.fi>b.se-b.fi;
  }
};
    void unstoppable()
{
    int n;
    cin >> n;
    vector<int>a(6+n, 0);

    set <pii,cmp> st;

    st.insert ({1,n});

    for (int i = 1; i <= n; i++)
    {
             int l,r,mid;
             l = *(st.begin()).fi;
             r = *(st.begin()).se;
             mid =(l+r)/2;
             a [mid] = i;
             st.erase(st.begin());
             st.insert({l,mid-1});
             st.insert({mid+1,r});
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

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

