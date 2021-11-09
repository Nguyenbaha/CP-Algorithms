#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n + 1];
    for(int i = 1;i<=n;i++){
        int x;
        cin>>x;
        arr[x] = i;
    }

    cout<<"chi so: ";
    for(int i=1; i<=n;++i)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<"gia tri ";
    for(int i=1; i<=n;++i)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
    int mn = n+1;
    int mx = -1;
    for(int i = 1;i<=n;i++){
        mx = max(mx, arr[i] - mn);
           mn = min(mn, arr[i]);
    }
    cout<<mx;
    return 0;
}
