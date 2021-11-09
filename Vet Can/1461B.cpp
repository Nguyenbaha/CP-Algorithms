#include <bits/stdc++.h>
using namespace std;
 
void unstoppable() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n + 1, vector<int>(m));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
            grid[i][j] = (s[j] == '*');
    }
    // for(int i=0;i < n; ++i)
    //     {
    //         for(int j=0; j < m ; ++j)
    //             cout<<grid[i][j];
    //         cout<<endl;
    //     }

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 1; j + 1 < m; j++) {
            if(grid[i][j] != 1)
                continue;
            grid[i][j] = min({grid[i + 1][j - 1], grid[i + 1][j], grid[i + 1][j + 1]}) + 1;
          // cout<<grid[i + 1][j - 1] << grid[i + 1][j] << grid[i + 1][j + 1]<<endl;
           // cout<<i <<' ' <<j<<' '<<grid[i][j];
                        //return;
           
        }
       // cout<<endl;
    }
 
    int ans = 0; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            //ans += grid[i][j];
            //cout<< grid[i][j];
        }
       // cout<<endl;
    }
    
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
        unstoppable();
}