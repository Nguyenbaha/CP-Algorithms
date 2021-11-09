#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁


ll tron(ll a[], int l, int m, int r)
    {
    int n1 = m-l+1;
    int n2 = r-m;
    int  L[n1],R[n2];
    for(int i=0;i<n1;++i)
        L[i] = a[i+l];
    for(int i=0;i<n2;++i)
        R[i] = a[m+i+1];
    int i=0,j=0,k=l; ll res=0;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k] = R[j];
            j++;k++;
            res += n1-i;
        }

    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
    return res;
}

    ll proc(ll a[], int l, int r)
    {
        ll res = 0;
        if(l<r)
        {
            int mid = (l+r)>>1;
            res += proc(a,l,mid);
            res += proc(a,mid+1,r);
            res += tron(a,l,mid,r);
        }
        return res;
    }

void Never_give_up()

{
    int n; cin>>n;
    ll a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    cout<<proc(a,0,n-1)<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


