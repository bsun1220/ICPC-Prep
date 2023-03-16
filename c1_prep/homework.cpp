#include <set>
#include <iostream>
#include <vector>
#include <map>
#define ll                    long long int
using namespace std;

int main(){
    string n; cin >> n;
    int k; cin >> k;
    if (k >= n.length()){
        cout << 0 << endl;
        cout << "" << endl;
        return 0;
    } 

    int count[26] = {0};
    for(char c : n) count[c - 97]++;

    pair<int, int> sorted_ind [26];
    for(int i = 0; i < 26; i++){
        sorted_ind[i] = {count[i], i};
    }
    sort(sorted_ind, sorted_ind + 26);

    for(int i = 0; i < 26; i++){
        int amount_to_remove = min(sorted_ind[i].first, k); 
        int key = sorted_ind[i].second; 
        k -= amount_to_remove;
        count[key] -= amount_to_remove;
        if (k <= 0){
            break; 
        }
    }
    
    int total = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] > 0) total++;
    }
    cout << total << endl;
    for(auto c: n){
        if (count[c - 97] > 0){
            cout << c;
        }
        count[c - 97]--;
    }
    cout << endl;

}