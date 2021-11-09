#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        int cntz=0;
        int cntzb=0;
        for(char c: a)
            if(c=='z') cntz++;
        for(char c: b)
            if(c=='z') cntzb++;
        if(cntz!=0 && cntzb ==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int res= n-k+1;
        vector<char> v1,v2;
        for(char c: a)
            v1.push_back(c);
        for(char c: b)
            v2.push_back(c);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int cnt =0;
        for(int i=0;i<n;++i)

            if(v1[i]!=v2[i]) cnt++;
        if(cnt<= res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
