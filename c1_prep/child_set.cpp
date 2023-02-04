#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

vector<int> convert_to_binary(ll x){
    vector<int> lst;
    int index = 0;
    while(x != 0){
        int remain = x % 2;
        if(remain == 1){
            lst.push_back(index);
        }
        x/=2; 
        index++; 
    }
    return lst; 
}

void print_list(vector<int>lst){
    for(int i = 0; i < lst.size(); i++){
        cout << lst[i] << " ";
    }
    cout << endl;
}

int main(){
    ll sum; cin >> sum;
    ll limit; cin >> limit;


    vector<int> lst = convert_to_binary(sum);
    if (pow(2, lst[lst.size() - 1]) > limit){
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < lst.size(); i++){
        cout << pow(2, lst[i]) << " ";
    }
    cout << endl;

}