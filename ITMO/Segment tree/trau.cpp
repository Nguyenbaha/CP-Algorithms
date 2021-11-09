#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here
 string s;
 int q;
 vector<set<int>>posSet(26);
void sol()
{
    cin>>s;
    for(int i=0;i<s.size();++i)
        posSet[s[i]-'a'].insert(i);
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int pos; char c;
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
            --l,--r;
            int cnt =0;
            for(int i=0;i<26;++i)
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
