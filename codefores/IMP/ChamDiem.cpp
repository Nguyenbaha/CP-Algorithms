#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int wa=0;
    int total = 0;
    int k=0;
    map<string,int> mp;
    vector<int> vs;
   // vector<pair<char,int>> f;
    while(n--)
    {
        int h,m;
        string p,v;
        char c;



        cin>>h>>c>>m>>p>>v;
        if(v=="OK")
        {
            cnt++;
            total += h*60 + m;
            int tmp = mp[p];
            vs.push_back(tmp);
            //mp[p]=0;
        }
        else if(v != "OK" && v != "CE")
        {
            mp[p]++;

        }
    }
    for(auto e: vs) k+=e;
    cout<<cnt<<' '<<total + k*20;
}
