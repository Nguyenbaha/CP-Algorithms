#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,q; cin>>n>>q;
        string s;
        cin>>s;
        while(q--)

        {
            int l,r;
            cin>>l>>r;
            set<int> ss;
            for(char c: s)
                ss.insert(c);
            if(ss.size()==1)
            {
                if(r-l+1==n) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
                continue;
            }
            l--,r--;
            bool b1=0,b2=0;
            for(int i=0;i<l;++i)
                if(s[i]==s[l])
                {
                    b1=1;
                    break;
                }
            for(int i=r+1;i<n;++i)
                if(s[i]==s[r])
            {
                b2=1;
                break;
            }
            if(!b1 && !b2)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
