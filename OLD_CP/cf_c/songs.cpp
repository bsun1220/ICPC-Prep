#include <vector>
#include <iostream>
using namespace std;

int main(){
    long long int m, n; cin >> n; cin >> m;
    vector<int> diff; 
    long long int total = 0;
    for(long long int i = 0; i < n; i++){
        long long int full, comp; cin >> full; cin >> comp; 
        total += full; 
        diff.push_back(full - comp);
    }
    long long int remove = total - m;
    long long int iter = 0;
    sort(diff.begin(), diff.end(), greater<long long int>());
    for(int i = 0; i < diff.size(); i++){
        if(remove <= 0){
            break;
        }
        remove -= diff[i];
        iter++;
    }

    if(remove > 0 ) cout << -1 << endl;
    else cout << iter << endl;

}