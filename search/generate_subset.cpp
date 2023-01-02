
#include <iostream>
#include <vector>
using namespace std;

int n = 100;
vector<int> subset;

int main(){
    return 0;
}

//use recursion
void search1(int k){
    if (k == n){
        //process subset
    } else {
        search1(k + 1);
        subset.push_back(k);
        search1(k + 1);
        subset.pop_back();
    }
}

//bitwise method
void search2(int k){
    for (int b = 0; b < (1 << n); b++){
        vector<int> subset;
        for (int i = 0; i < n; i++){
            if(b&(1<<i)) subset.push_back(i);
        }
    }
}