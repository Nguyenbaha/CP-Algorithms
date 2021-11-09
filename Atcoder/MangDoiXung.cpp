#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
#define ll long long

void execute();
int main() 
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    execute();
    return 0;
}
 
 
void execute()
{
    ll N;
    cin >> N;
 
    int A[200000];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
 
    int parent[200001] = {};
 
    int num = 0;
    for(int i = 0; i < N / 2; i++){
        int idx_a = A[i];
        int idx_b = A[N-1-i];
        while(0 != parent[idx_a]) idx_a = parent[idx_a];
        while(0 != parent[idx_b]) idx_b = parent[idx_b];
        if(idx_a != idx_b)
        {
            if(idx_a < idx_b){
                parent[idx_b] = idx_a;
            }else{
                parent[idx_a] = idx_b;
            }
            num++;
        }
    }
    cout << num << endl;
}