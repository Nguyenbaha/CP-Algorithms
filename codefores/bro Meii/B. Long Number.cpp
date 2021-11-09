#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[10];
string s; int n;
void Never_give_up()

{
cin>>n>>s;
int c;
for(int i=1;i<10;++i)
{
    cin>>c;
    a[i]=c;
}
int id=-1;
for(int i=00;i<s.size();++i)
if(a[s[i]-'0'] > s[i]-'0') {id=i; break;}

    if(id==-1)
    {
        cout<<s;
        return;
        //exits(0);
    }
    int stop = id;
    for(int i=id+1;i<n;++i)
        if(a[s[i]-'0'] < s[i]-'0')
    {
        stop = i-1; break;
    }
    else stop=i;
    for (int i = id; i <= stop; ++i) s[i] = a[s[i] - '0'] + '0';
	cout << s;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);


Never_give_up();


 return 0;
}


