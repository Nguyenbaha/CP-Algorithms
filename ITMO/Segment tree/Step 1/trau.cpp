#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here
 vector<set<int>> posSet(26);
 string s;
 int n,k;

void sol()
{
    cin>>s;
    for(int i=0;i<s.size();++i)
        posSet[s[i]-'a'].insert(i);
   // cout<<"here "<<endl;
//    for(int i=0;i<26;++i)
//    {
//        cout<<"case : "<<i<<endl;
//        for(auto e:posSet[i])
//            cout<<e<<' ';
//        cout<<endl;
//    }
    cin>>k;
    while(k--)
    {
        cin>>n;

        if(n==1)
        {
            char c;
            int pos;
            cin>>pos>>c;
            --pos;
            posSet[s[pos]-'a'].erase(pos);
            s[pos] = c;
            posSet[s[pos]-'a'].insert(pos);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            int cnt  = 0;
            l--; r--;
            for( int i=0;i<26;++i)
            {
                auto it = posSet[i].lower_bound(l);
                if(it != posSet[i].end() && *it <= r)
                    cnt++;
            }
            cout<<cnt<<endl;
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
