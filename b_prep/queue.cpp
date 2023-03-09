#include <set>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<int, int> m_f;
    set<int> m_b;
    int grid[n][2];
    int ans[n];
    for(int i = 0; i < n; i++){
        cin >> grid[i][0];
        cin >> grid[i][1];

        m_f.insert({grid[i][0], i});
        m_b.insert(grid[i][1]);
        
    }
    
    int first = -1; 
    for (const auto &pair : m_f){
        if (m_b.count(pair.first) == 0){
            first = pair.first;
        }
    }
    
    ans[0] = first; 
    int x = 0; 
    for(int i = 0; i < n/2; i++){
        if(2 * i + 1 >= n){
            break;
        }
        ans[2 * i + 1] = grid[m_f[x]][1];
        x = ans[2 * i + 1];
    }

    for(int i = 1; i <= n/2; i++){
        if(2 * i >= n){
            break;
        }
        ans[2 * i] = grid[m_f[first]][1];
        first = ans[2 * i];
    }

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}