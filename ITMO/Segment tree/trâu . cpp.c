#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here
 string s;
 int q;
 set<int> st;
void sol()
{
    // abacaba : 3
    //  1: abababa
    // 1:  ababbba
    // 2: 1;

    cin>>s;
    cin>>q;
    while(q--)
    {
        int n,l,r,pos,c;
        cin>>n;
        if(n==1)
        {
            cin>>pos>>c;
            s[pos-1]=c;
        }
        else
        {
            for(int i=l-1;i<r;++i)
                st.insert(s[i]-'a');
            cout<<st.size()<<endl;
            st.clear();
        }
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
    sol();
 }


}

