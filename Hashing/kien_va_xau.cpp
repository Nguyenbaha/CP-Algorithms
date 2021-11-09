#include <bits/stdc++.h>
using namespace std;


const int N = 1e6+6;
int base = 311;
long long mod  = 1e7+7;

int T=1;


// Here
string s;
int n, k;

void unstoppable()
{
   cin >> n >> k >> s;
   set<char> st;
   for(char c: s)
    st.insert(c);
    if(st.size()==1)
    {
        cout <<"s";
        return;
    }
    else
    {
        char c =' ';
        for(auto r: st)
        {
            c = r;
            break;
        }
        char cc=' ';
        int j=0;
        for(auto e: st)
        {
            j++;
            if(j==2)
            {
                cc=e;
                break;
            }
        }
        for(int i=0;i < n-1;++i)
        {
            cout << c;
        }
        cout<<cc;
        return;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   // cin >> T;
    while(T--)
{
    unstoppable();
 }


}

